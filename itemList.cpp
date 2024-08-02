#include<iostream>
#include<fstream>
using namespace std;

class Item{
    string name;
    float price;
    int quantity;

    friend ofstream &operator<<(ofstream &ofs,const Item &i);
    friend ifstream &operator>>(ifstream &ifs,Item &i);
    friend ostream &operator<<(ostream &ost,const Item &i);
    friend istream &operator>>(istream &ist,Item &i);
};

ofstream &operator<<(ofstream &ofs,const Item &i){
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.quantity<<endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs,Item &i){
    getline(ifs,i.name);
    ifs>>i.price;
    ifs>>i.quantity;
    return ifs;
}

ostream &operator<<(ostream &ost,const Item &i){
    ost<<"Name of Item :"<<i.name<<endl;
    ost<<"Price        :"<<i.price<<endl;
    ost<<"Quantity     :"<<i.quantity<<endl;
    return ost;
}

istream &operator>>(istream &ist,Item &i){
    cout<<"Enter the name of the item\n";
    getline(ist,i.name);
    cout<<"Enter the price of the item\n";
    ist>>i.price;
    cout<<"Enter the quantity\n";
    ist>>i.quantity;
    return ist;
}

int main(){
    Item i1[10];
    int n;
    cout<<"Enter the number of items\n";
    cin>>n;
    cin.ignore();
    if(n>10){
        cout<<"The number of items has exceeds the limit"<<endl;
        exit (0);
    }
    
    for (int i=0;i<n;i++){
        cout<<"Enter the details of the item no"<<i+1<<"\n";
        cin>>i1[i];
        cin.ignore();
    }
    
    ofstream ofs("itemList.txt",ios::trunc);
    if(!ofs){
        cout<<"unable to open the file to write the data"<<endl;
        exit(0);
    }
    for (int i=0;i<n;i++){
        ofs<<i1[i];
    }
    ofs.close();


    ifstream ifs("itemList.txt");
    if(!ifs){
        cout<<"unable to open the file to read the data"<<endl;
        exit(0);
    }
    for (int i=0;i<n;i++){
        ifs>>i1[i];
    }
    ifs.close();

cout<<"DETAILS OF ITEM"<<endl;
    for (int i=0;i<n;i++){
        
        cout<<i1[i];
    }
    return 0;
}