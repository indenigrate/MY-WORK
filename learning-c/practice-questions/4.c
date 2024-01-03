#include <stdio.h>
/*
* https://codeforces.com/problemset/problem/1041/B
*/
long int gcd (long int a,long int b) ;

int main(){
    long int a,b,x,y,count=0;
    scanf("%ld %ld %ld %ld",&a,&b,&x,&y);
    
    long gcdd=gcd(x,y);
    x/=gcdd;
    y/=gcdd;
    for(long int i=1;;i++){
        if(x*i>a||y*i>b){
            break;
        }
        count++;
    }
   
    printf("%ld",count);
}


long int gcd (long int a,long int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
