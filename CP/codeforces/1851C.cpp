#include <iostream>
using namespace std;

void solution(int n,int k,int arr[]){
    int l=0,r;
    int numLeft=k,numRight=k;
    int index;
    int flag=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("YES\n");
        return;
    }
    while(l<n){
        index=l+1;
        numLeft=k-1;
        numRight=k-1;
        while(numLeft&&index<n){
            if(arr[index]==arr[l]){
                numLeft--;
            }
            index++;
        }
        l++;
        if(numLeft)
            continue;
        for(r=index;r<n;r++){
            index=r+1;
            numRight=k-1;
            
            while(numRight&&index<n){
                if(arr[index]==arr[r]){
                    numRight--;
                }
                index++;
            }
            if(numRight==0){
                printf("YES\n");
                return;
            }
        }
    }
    printf("NO\n");
}

int main(){
    int t;
    string s;
    int n,k;
    cin>>t;
    while(t--){
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        solution(n,k,arr);
    }
}