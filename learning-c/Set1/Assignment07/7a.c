#include <stdio.h>
int C(int n, int k);

void main(){
    printf("Enter two numbers \n");
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Ways to choose %d items from %d items %d\n",a,b,C(b,a));
}

int C(int n, int k){
    if(k<=0)
        return 1;

    return (n*C(n-1,k-1))/k;

}