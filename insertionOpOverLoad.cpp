#include<iostream>
using namespace std;

class rationalNumbers{
    private:
        int num;
        int den;
    public:
        rationalNumbers(int n,int d);
        friend rationalNumbers operator+(rationalNumbers r1,rationalNumbers r2);
        friend ostream & operator<<(ostream &out,rationalNumbers&rN );
};


rationalNumbers::rationalNumbers(int n,int d){
    if(d!=0){
        den=d;
        num=n;
    }
}

int main(){
    rationalNumbers rn1(3,4),rn2(5,6);
    rationalNumbers rn3=rn1+rn2;
    cout<<rn3;
}


rationalNumbers operator+(rationalNumbers r1,rationalNumbers r2){
    int lcm = r1.den * r2.den; // Or use a function to find LCM
    int new_num = (r1.num * lcm / r1.den) + (r2.num * lcm / r2.den);
    if(new_num%2==0&&lcm%2==0)
    {
        new_num/=2;
        lcm/=2;
        return rationalNumbers(new_num,lcm);
    }
    else if(new_num%3==0&&lcm%3==0)
    {
        new_num/=3;
        lcm/=3;
        return rationalNumbers(new_num,lcm);
    }
    else{
        return rationalNumbers(new_num,lcm);
    }
}

ostream  &operator<<(ostream & out,rationalNumbers &r){
    out<<r.num<<"/"<<r.den<<endl;
    return out;
} 