/*
https://codeforces.com/problemset/problem/1832/C
*/
#include <stdio.h>
#include <stdlib.h>

void function();

int main(){
    long long int testCases;
    scanf("%lli",&testCases);

    while(testCases--){
        function();
    }
}

void function(){
    long long int n;
    scanf("%lli",&n);

    long long int array [n],test[n],minNum=n;
    long long int a,b,c;
    if(n<2){
        printf("%lli\n",n);
        return;
    }

    for(long long int i=0;i<n;i++){
        scanf(" %lli",&array[i]);

        if (i>=2){
            //drop num
            
            a=i;
            b=i-1;
            c=i-2;
            label:
            if(test[b]==1&&b>=0){
                b--;
                c--;
                goto label;
            }
            if(test[c]==1&&c>=0){
                c--;
                goto label;
            }
            if((abs(array[a]-array[b])+abs(array[b]-array[c]))==abs(array[a]-array[c])){
            minNum--;
                test[b]=1;
            }
            printf("%lli  %lli  %lli\n",c,b,a);
        }
    }
    if(array[a]==array[c]){
                minNum--;
                printf("%lli  %lli  %lli\n",c,b,a);
            }
    printf("%lli\n",minNum);
}