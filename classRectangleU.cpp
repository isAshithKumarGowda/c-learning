#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle (int l,int b);
        void setLength(int l);
        void setBreadth(int b);
        int getLength();
        int getBreadth();
        int area();
        int perimeter();
        bool ifSquare();
        ~Rectangle();
};
int main(){
    int l,b;
    cout<<"enter the value of l and b "<<endl;
    cin>>l>>b;
    Rectangle r1(l,b);
    cout<<"length = "<<r1.getLength()<<endl;
    cout<<"breadth = "<<r1.getBreadth()<<endl;
    cout<<"area = "<<r1.area()<<endl;
    cout<<"perimeter = "<<r1.perimeter()<<endl;
    if(r1.ifSquare())
    cout<<"it is a square "<<endl;
    else
    cout<<"it is not a square"<<endl;
}
Rectangle::Rectangle(int l=1,int b=1){
    setLength(l);
    setBreadth(b);
}
void Rectangle::setLength(int l){
    if(l>0)
    length=l;
    else
    length=1;
}
void Rectangle::setBreadth(int b){
    if(b>0)
    breadth=b;
    else
    breadth=1;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}
int Rectangle::area(){
    int a=length*breadth;
    return a;
}
int Rectangle::perimeter(){
    int p=2*(length+breadth);
    return p;
}
bool Rectangle::ifSquare(){
    if(length==breadth)
    return true;
    else
    return false;
}
Rectangle::~Rectangle(){
    cout<<"Rectangel has been destroyed"<<endl;
}
