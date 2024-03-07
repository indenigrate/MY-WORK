#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char rev[100];
int i=0;

void revstr(char *s){
    
    if(*(s+1)){
        revstr(s+1);
    }
    rev[i++]=*s;
}
int main(){
    char ch[100];
    scanf("%s",ch);
    revstr(ch);
    printf("%s\n",rev);
}