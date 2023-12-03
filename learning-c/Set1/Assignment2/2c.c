#include <stdio.h>

int main(){
    printf("Enter length of the three sides of the triangle \n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b||b==c||c==a){
        if(a==b&&b==c&&c==a)
            printf("Equilateral");
        else
            printf("Isosceles");    
    }
    else
        printf("Scalene");

    printf("\n");
}