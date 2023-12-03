#include <stdio.h>
int main(){
    int p,c,m;
    printf("Enter pcm marks\n");
    scanf("%d %d %d",&p,&c,&m);
    if(m>=65&&p>=55&&c>=50&&((p+c+m)>=190||(p+m)>=140))
        printf("Eligible");
    else
        printf("Not eligible");

        printf("\n");
}