#include <stdio.h>

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    printf("Enter a number \n");
    int n;
    scanf("%d",&n);
    printf("The factorial is %d \n",factorial(n));
}