#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"Ashith Kumar Gowda "<<endl;
    ofs<<19<<endl;
    ofs<<"CSD"<<endl;
    ofs.close();
    ifstream infile;
    infile.open("My.txt");
    //another way of opening a file is
    //ifstream infile("My.txt")
    if(!infile)//another way is (!infile.is_open())
        cout<<"file cannot be opened ";
    string name;
    int roll;
    string branch;

    infile>>name>>roll>>branch;
    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;
    if(infile.eof())
        cout<<"end of file"<<endl;
    infile.close();
}