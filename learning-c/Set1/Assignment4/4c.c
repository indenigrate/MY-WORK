#include <stdio.h>

void printn(char c,int n);

void main(){
    printf("Enter a number ");

    int n;
    scanf("%d",&n);

    for(int i=n,j=1;i>=-n;){
       
        printn('.',i);
        printn('.',-i);
        printn('*',j);
        printn('.',i);
        printn('.',-i);
        printf("\n");
        i--;
        if(i>=0){
            j+=2;
        }
        if(i<0){
            j-=2;
        }
        
    }
}

void printn(char c,int n){
    if(n<0)
    return;
    for(int i=0;i<n;i++){
        printf("%c",c);
    }
}