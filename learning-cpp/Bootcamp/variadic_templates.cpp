#include <iostream>
#include <string>

using namespace std;
template <typename T>
void func(T t){
    cout<<t<<endl;
}

template <typename T,typename... Args>
void func(T t,Args... args){
    cout<<t<<endl;
    func(args...);
}



int main(){
    func('a',456,4.56,"hello");
    User devansh;
    devansh.name="Devansh";
    devansh.myName();
    return 0;
}