#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    int l,r;
    cin>>t;
    while(t--){
        scanf("%d %d",&l,&r);
        cout<<(int)(log(r)/log(2))<<endl;
    }
}

