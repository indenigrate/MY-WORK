#include <stdio.h>

int main(){
    printf("Enter a number ");
    int n;
    scanf("%d",&n);
    int sum;

    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("The sum of digits is  %d\n",sum);
    
}