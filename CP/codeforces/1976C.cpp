#include <iostream>
using namespace std;

void solution(int n,int m,int a[],int b[]){
    //m programmers
    //n testers
    int pcount=0,tcount=0;
    int psum=0,tsum=0;
    int index=0;
    int skip=0;
    while(skip<=(n+m)){
        pcount=0;
        tcount=0;
        psum=0;
        tsum=0;
        for(index=0;index<=n+m;index++){
            if(index==skip)
                continue;
            if(a[index]>b[index]){
                if(pcount<m){
                    //becomes programmer
                    psum+=a[index];
                    pcount++;
                    continue;
                }
                else{
                    //becomes tester
                    tsum+=b[index];
                    tcount++;
                    continue;
                }
            }
            else{
                if(tcount<n){
                    //becomes tester
                    tsum+=b[index];
                    tcount++;
                    continue;
                }
                else{
                    //becomes programmer
                    psum+=a[index];
                    pcount++;
                    continue;
                }
            }
        }
        cout<<psum+tsum<<" ";
        skip++;
    }
}

int main(){
    int t=0;
    cin>>t;
    int n,m;

    while(t--){
        scanf("%d %d",&n,&m);
        int a[n+m+1],b[n+m+1];
        for(int i=0;i<n+m+1;i++){
            scanf("%d",&a[i]);
        }
        getchar();
        for(int i=0;i<n+m+1;i++){
            scanf("%d",&b[i]);
        }
        getchar();
        solution(n,m,a,b);
    }
}