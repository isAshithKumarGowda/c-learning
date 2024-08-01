#include <iostream>
#include <fstream>

using namespace std;

class Student {
    public:
        string name;
        int roll;
        string branch;

        friend ofstream & operator<<(ofstream &ofs,Student &s);
        friend ifstream & operator>>(ifstream &ifs,Student &s);
};
ofstream & operator <<(ofstream &ofs, Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs,Student &s){
    getline(ifs,s.name);
    ifs>>s.roll;
    ifs.ignore();
    getline(ifs,s.branch);
    return ifs;
}

int main(){
    Student s1;
    s1.name="Ashith Kumar Gowda";s1.roll=5;s1.branch="Computer Science and Design";

    ofstream ofs("Student.txt",ios::trunc);
    // ofs<<s1.name<<endl;
    // ofs<<s1.roll<<endl;
    // ofs<<s1.branch<<endl;

    ofs<<s1;
    ofs.close();


    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;
    ifs.close();

}