#include <stdio.h>
int recursive(int n);

void main(){
    printf("Enter a number ");
    int n;
    scanf("%d",&n);
    printf("%d \n",recursive(n));
}

int recursive(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==2) 
        return 2;
    if(n>=3)
        return recursive(n-1)+recursive(n-2)+recursive(n-3);
}