#include <iostream>
using namespace std;

void solution(int n,int m,string s){
    int arr[7]={0};
    for(int i=0;i<n;i++){
        arr[(int)(s[i]-'A')]++;
    }
    int newQ=0;
    for(int i=0;i<7;i++){
        if(arr[i]>=m)
            continue;
        newQ+=(m-arr[i]);
    }
    cout<<newQ<<endl;
}

int main(){
    int t,n,m;
    string s;
    cin>>t;
    while(t--){
        scanf("%d %d",&n,&m);
        cin>>s;
        solution(n,m,s);
    }
}