#include <stdio.h>
int main(){
    int A[20]={2,3,4,5,6,7,8,9,8,7};
    // printf("A     =%u\n",A);
    // printf("A+1   =%u\n",A+1);
    // printf("&A    =%u\n",&A);
    // printf("&A+1  =%u\n",&A+1);
    // printf("*&A   =%u\n",*&A);
    int *p;
    p=(int *)malloc(sizeof(int)*10);
    int B[10][10];
    int (*q)[10];
    q=(int (*)[10])malloc(sizeof(int)*100);
    int *r[8];

    printf("A=  %u\n",sizeof(A));
    printf("p=  %u\n",sizeof(p));
    printf("B=  %u\n",sizeof(B));
    printf("q=  %u\n",sizeof(q));
    printf("r=  %u\n",sizeof(r));
    return 0;
}