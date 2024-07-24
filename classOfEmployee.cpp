#include<iostream>
using namespace std;
#include<string>
class Employee{
    private:
        string empName;
        int empID;
    public:
        Employee(int id,string name);
        void setEmpID(int id);
        void setEmpName(string name);
        int getEmpID();
        string getEmpName();
};
Employee::Employee(int id,string name){
    setEmpName(name);
    setEmpID(id);
}
string Employee::getEmpName(){
    return empName;
}
int Employee::getEmpID(){
    return empID;
}
void Employee::setEmpName(string name){
    empName=name;
}
void Employee::setEmpID(int id){
    empID=id;
}
class fullTimeEmp:public Employee{
    private:
        int empSalary;
    public:
        fullTimeEmp(int id,string name);
        void setSalary(int salary);
        int getSalary();
};
fullTimeEmp::fullTimeEmp(int id,string name):Employee(id,name){
    int salary;
    cout<<"Enter your salary "<<endl;
    cin>>salary;
    setSalary(salary);
    cout<<"Name of the Employee "<<getEmpName()<<endl;
    cout<<"Employee ID "<<getEmpID()<<endl;
    cout<<"Salary of the Employee"<<getSalary()<<endl;
}
void fullTimeEmp::setSalary(int salary){
    empSalary = salary;
}
int fullTimeEmp::getSalary(){
    return empSalary;
}
class partTimeEmp:public Employee{
    private:
        int empWages;
    public:
        partTimeEmp(int id,string name);
        void setWages(int wages);
        int getWages();
};
void partTimeEmp::setWages(int wages){
    empWages = wages;
}
int partTimeEmp::getWages(){
    return empWages;
}
partTimeEmp::partTimeEmp(int id,string name):Employee(id,name){
    int wages;
    cout<<"Enter your Wages "<<endl;
    cin>>wages;
    setWages(wages);
    cout<<"Name of the Employee "<<getEmpName()<<endl;
    cout<<"Employee ID "<<getEmpID()<<endl;
    cout<<"Wages of the Employee"<<getWages()<<endl;
}
int main(){
    char response; 
    string name;
    int id;
    cout<<"Are you a Part time Employee ?? [Y/N]"<<endl;
    cin>>response;
    if(response=='Y'||response=='y'){
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your Employee id"<<endl;
        cin>>id;
        partTimeEmp pt(id,name);

    }
    else if(response=='N'||response=='n'){
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your Employee id"<<endl;
        cin>>id;
        fullTimeEmp ft(id,name);
    }
    else {
        cout<<"Enter a valid input"<<endl;
    }
    return 0;
}