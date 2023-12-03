#include <stdio.h>

int main(){
    printf("Enter the number of fruits\n");
    int a,b,c,day;
    scanf("%d %d %d",&a,&b,&c);
    
    printf("Enter the number of day");
    scanf("%d",&day);
    char ch;

    for(int i=1;i<=day;i++){
        if(a==0&&b==0&&c==0){
            printf("Out of fruits\n");
            break;
        }
        if(a>=b){
            if(a>=c){
                ch='a';
                a--;
            }
            else{
                ch='c';
                c--;
            }
        }
        else{
            if(b>=c){
                ch='b';
                b--;
            }
            else{
                ch='c';
                c--;
            }
        }
        //printf("The fruit she eats %c\n",ch);
    }
    printf("The fruit she eats %c\n",ch);
}