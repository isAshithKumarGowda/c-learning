#include<iostream>
using namespace std;

class Base{
    public:
        
        Base(){

            cout<<"constructor of base"<<endl;
        }
        virtual ~Base(){
            cout<<"Destructor of Base"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"constructor of derived"<<endl;
        }
        ~Derived(){
            cout<<"Destructor of Derived"<<endl;
        }
};

void fun(){
    Base *b=new Derived;
    delete b;
}

int main(){
    fun();
    return 0;
}