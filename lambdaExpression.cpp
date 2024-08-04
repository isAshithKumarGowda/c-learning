#include<iostream>

using namespace std;

template<typename T>
T add(T &x,T &y){
    auto i=[](T &x,T &y){return x+y;}(x,y);
    return i;
    
}

int main(){
    int a=6;
    int b=5;
    cout<<add(a,b);
}