#include <iostream>
#include <math.h>
using namespace std;


void solution(int n){
    int max=n-(n+3)/4;
    for(int i=0;i<max;i++){
        cout<<"9";
    }
    for(int i=(n+3/4);i>0;i--){
        cout<<"8";
    }
    cout<<endl;
}

int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        solution(n);
    }
}