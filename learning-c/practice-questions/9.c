/*
https://codeforces.com/problemset/problem/1836/A
*/
#include <stdio.h>
void function();
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        function();
    }
}

void function(){
    int num=0;

    scanf("%d",&num);

    int array[num];
    int count[201]={0};

    int sum;
    
    for(int i=0;i<num;i++){
        
        scanf(" %d",&array[i]);
        count[array[i]]++;
        sum+=array[i];
        //printf("%d    ",array[i]);
    }
    //   printf("%d",sum);
    for(int i=0;i<200;i++){
        if(count[i+1]>count[i]){
            printf("NO\n");
            return;
        }
    }
    if(sum>200){
            printf("NO\n");
            return;
        }
    printf("YES\n");
}