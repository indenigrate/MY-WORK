#include <stdio.h>
/*
* https://codeforces.com/problemset/problem/1041/B
*/
int main(){
    long int a,b,x,y,count=0;
    scanf("%ld %ld %ld %ld",&a,&b,&x,&y);

    // for(int i=2;;i++){

    //     if(x%i==0&&y%i==0){
    //         x/=i;
    //         y/=i;
    //         i--;
    //     }
    //     if(i>(x/i))
    //         break;
    // }
    long int gcd;
    for(int i=0;i<=x&&i<=y;i++){
        if(x%i==0 && y%i==0)
            gcd = i;
    }
    x/=gcd;
    y/=gcd;
    for(int i=1;;i++){
        if(x*i>a||y*i>b){
            break;
        }
        count++;
    }
    printf("%ld",count);
}