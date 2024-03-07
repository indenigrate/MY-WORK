#include <iostream>
//#include <cstdio>
using namespace std;

int main(){
    // int n=10;
    // cout<<"int is"<<endl;
    // puts("hello world\n");
    // printf("%d\n",n);

    int n=4;
    cout<<n<<endl;
    cout<<&n<<endl;
    int &m=n;
    cout<<m<<endl<<&m<<endl<<&n<<endl<<n<<endl;
    m=5;
    cout<<n<<endl;

    int arr[]={5,4,3,2,1};
    cout<<"switched"<<endl;
    for(int i:arr){
        cout<<i<<endl;
    }
    cout<<"next"<<endl;

    for(int *i=arr;i<arr+5;){
        cout<<*i++<<" ";
    }

    try
    {
        cout<<"did some testing"<<endl;
        //throw call_api;
        cout<<"No code executes after return or throw\n";
    }   
    catch(int x)
    {   
        cout<<"Integer exception handled\n";
    }
    
}