#include <iostream>
#include <string>
using namespace std;
class User{
    int secret =44;
    public:
        string name="default";
        void myName();
        void setSecret(const int &update){  //why does this not work without the keyword const
            secret=update;
        }
        void getSecret() const{cout<<secret<<endl;}

};

void User::myName(){
    cout<<name<<endl;
}

int main(){
    
    User devansh;
    devansh.name="Devansh";
    devansh.myName();
    devansh.getSecret();
    devansh.setSecret(245);
    devansh.getSecret();

    const User sam;
    sam.getSecret();

    return 0;
}