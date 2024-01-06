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
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int i=0;i<n;i++){
        scanf("\n");
        for(int j=0;j<n;j++){
            scanf("%c",&arr[i][j]);
        }
    }
    int a=0,b=0,c=0,d=0;
    int count=0;
    int k=n-1;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            a=(int)arr[i][j];
            b=(int)arr[j][k-i];
            c=(int)arr[k-i][k-j];
            d=(int)arr[k-j][i];
            // printf("%d %d %d %d \t\t",a,b,c,d);
            int g1=a>=b?a:b;
            int g2=c>=d?c:d;
            int g=g1>=g2?g1:g2;
            count+=4*g-a-b-c-d;
            //  printf("%d\n",count);
            }   
    }
    printf("%d\n",count);
    count=0;


}