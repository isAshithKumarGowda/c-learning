#include<iostream>
using namespace std;

class Complex{
    public:
        int real;
        int img;
        Complex operator +(Complex c){
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }
};

int main(){
    Complex c1,c2,c3;
    c1.real=10;c1.img=5;
    c2.real=20;c2.img=2;
    c3=c1+c2;
    cout<<"the sum of the complex numbers is "<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}