#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name = "";
    string _os="";
    int _price=0;

public:
    Phone();    //default constructor
     Phone(const string &name,const string &os,const int &price);    //parametereized constructor
     Phone(const Phone &);   //copy constructor
     string getName(){return _os;}
     int getPrice();
     ~Phone();    //destructor
     

};

Phone::Phone() : _name(),_os("Andy"),_price(){
    puts("Default constructor");
}

Phone::Phone(const string &name,const string &os,const int &price) : _name(name),_os(os),_price(price){
    puts("This is parametric constructor");
}   

Phone::Phone(const Phone &values){
    puts("Overwrite copy constructor");
    _name="new-"+values._name;
    _os="skinned"+values._os;
    _price=values._price;
    }   

Phone::~Phone(){
    printf("Destructor called for %s\n",_name.c_str());
}

int Phone::getPrice(){
    printf("Call from getPrice %p\n",this);
    return _price;
}

int main(){
    Phone SamsungA1;
    cout<<SamsungA1.getName()<<endl;

    Phone OnePlus8("OnePlus","Android",34000);
    cout<<OnePlus8.getName()<<endl;
    printf("Memory address for object %p\n",&OnePlus8);
    cout<<OnePlus8.getPrice()<<endl;

    Phone OnePlus8S=OnePlus8;
    cout<<OnePlus8S.getName()<<endl;

    return 0;
}