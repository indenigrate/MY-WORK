#include <stdio.h>

void function();
long long int gcd(long long int a, long long int b);

int main(){
    int testCases;
    scanf("%lli",&testCases);

    while(testCases--){
        function();
    }
}

long long int gcd(long long int a,long long int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  

void function(){
    long long int n,x,y;
    scanf("%lli %lli %lli",&n,&x,&y);
    long long int maxNum=0,minNum=0,commNum;
    long long int end=n,start=1;
    long long int sum=0;
    long long int gccd=gcd(x,y);
    long long int lcm=(x*y/gccd);
    commNum=n/(lcm);
    maxNum=n/x-commNum;
    minNum=n/y-commNum;
    
    sum=((n-maxNum+1+n)*maxNum/2)-(minNum*(minNum+1)/2);
    
    // for(int i=1;i<=n;i++){
    //     if(i%x==0&&i%y!=0){
    //         sum+=end--;
    //     }

    //     if(i%x!=0&&i%y==0){
    //         sum-=start++;
    //     }
    // }
    printf("%lli\n",sum);

}