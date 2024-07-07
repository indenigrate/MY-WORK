#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solution(int n,int f,int k,int arr[]){
    int key=arr[f-1];
    sort(arr, arr + n, greater<int>());
    if(arr[k-1]==key&&arr[k]==key){
        cout<<"maybe\n";
        return;
    }
    if(arr[k-1]<=key){
        cout<<"Yes\n";
        return;
    }
    cout<<"NO\n";
    return;
}


int main(){
    int t,n,f,k;
    cin>>t;
    while(t--){
        scanf("%d %d %d",&n,&f,&k);
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solution(n,f,k,arr);
    }
}