#include <iostream>
using namespace std;

void solution(int n,int m,int k, int fountains[][2]){

}

void findstart(int *r,int *c){
    
}
int main(){
    int t;
    int n,m,k;
    cin>>t;
    while(t--){
        scanf("%d %d %d",&n,&m,&k);
        int fountains[k][2];
        for(int i=0;i<k;i++){
            scanf("%d %d",&fountains[i][0],&fountains[i][1]);
        }
        solution(n,m,k,fountains);
    }
}