#include <iostream>
using namespace std;
void solution(){

}


int main(){
    int t;
    int m,n;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        int num,oddCount=0;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            if(num%2!=0)
                oddCount++;
        }
        if(oddCount%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
