/*
 * https://codeforces.com/problemset/problem/1327/A
 */
#include <stdio.h>

void question();
void check();

int main()
{
    int NumOfTestCases;
    scanf("%d", &NumOfTestCases);
    for (int i = 0; i < NumOfTestCases; i++)
    {
        question();
    }
}
void question(){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n-(k)*(k)<0||n>k){
            printf("NO\n");
            return;
        }
    check(n,k,1);

}

void check(int n,int k,int count){
    if(k==1){
        if(n%2==0){
            printf("NO\n");
            return;
        }
        else{   
            printf("YES\n");
            return;
        }
    }
    check(n-count,--k,count+2);
    return;

}