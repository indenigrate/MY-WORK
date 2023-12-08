#include <stdio.h>
int arraymax(int a[],int n);

void main(){
    printf("Enter an integer and then that many elements ");
    int n;
    scanf("%d",&n);
    int a[n];
 
    for(int i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    printf("Largest element %d \n",arraymax(a,n));
}

int arraymax(int a[],int n){
    if(n==0)
        return a[0];
    if(a[n-1]>arraymax(a,n-1)){
        return a[n-1];
    }
    else
        return arraymax(a,n-1);
    
}