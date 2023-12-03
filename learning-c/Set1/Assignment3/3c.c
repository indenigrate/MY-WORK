#include <stdio.h>

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    printf("Enter a floating point number ");
    float cosine,num;
    scanf("%f",&num);
    cosine=1.0-(1.0/fact(2))*num*num+(1.0/fact(4))*num*num*num*num-(1.0/fact(6))*num*num*num*num*num*num+(1.0/fact(8))*num*num*num*num*num*num*num*num;
    //find a better way
    printf("%f\n",cosine);
}