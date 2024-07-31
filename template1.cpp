#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b,T c){
    return (a>b &&a>c) ? a:(b>c)?b:c;
}


int main(){
    int a,b,c;
    cout<<"enter three numbers "<<endl;
    cin>>a>>b>>c;

    int max=Max(a,b,c);
    //int m=Max(&a,&b);
    cout<<max<<"\t"<<endl;
    return 0;
}