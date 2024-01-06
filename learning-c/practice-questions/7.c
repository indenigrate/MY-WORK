#include <stdio.h>
/*
 * https://codeforces.com/problemset/problem/1692/D
 */
void function();
int isPalin(int n,int m);
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    function();
    }
}

void function(){
    int HH,MM,I,dHH,dMM;
    int count=0;
    scanf("%d:%d %d",&HH,&MM,&I);
    dHH=I/60;
    dMM=I%60;
    int testHour=HH,testMin=MM;
    do{
        if(isPalin(testHour,testMin)){
            count++;
        }
        testHour+=dHH;
        testMin+=dMM;
        if(testMin>59){
            testMin-=60;
            testHour++;
        }
        if(testHour>23){
            testHour-=24;
        }
        
        // printf("%02d:%02d  ",testHour,testMin);
    }
    while(testHour!=HH||testMin!=MM);
    printf("%d\n",count);
}

int isPalin(int n,int m){
    int num=m,revm=0,revn=0;
    for(int i=0;i<2;i++){
        revm=revm*10+num%10;
        num/=10;
    }
    // num=n;
    // for(int i=0;i<2;i++){
    //     revn=revn*10+num%10;
    //     num/=10;
    // }
    if(revm==n){
        return 1;
    }
    else{
        return 0;
    }
}