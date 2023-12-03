#include<stdio.h>
int main(){
    float x,y;
    printf("Enter co-ordinates\n");
    scanf("%f %f",&x,&y);
    if(x>0){
        if(y>0)
            printf("first");
        else
            printf("fourth");    
    }
    else{
        if(y>0)
            printf("second");
        else
            printf("third");
    }
    printf("\n");
}