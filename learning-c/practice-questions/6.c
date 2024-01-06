#include <stdio.h>
/*
 * https://codeforces.com/problemset/problem/287/A
 */
int main(){
    char c[4][4];
    char str[1];
    for(int i=0;i<4;i++){
        scanf("\n");
        for(int j=0;j<4;j++){
            scanf("%c",&c[i][j]);
        }
        
        
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=c[i][j]+c[i][j+1]+c[i+1][j]+c[i+1][j+1];
            if(sum==140||sum==151||sum==184||sum==173){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
}