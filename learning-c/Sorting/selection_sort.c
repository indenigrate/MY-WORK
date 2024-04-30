#include <stdio.h>

int main(){

    int arr[]={1,5,6,3,8,9,2,4,5,7};
    int size=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]); 
    printf("\n");

    int i,j;
    for(i=0;i<size;i++){
        int greatest=0;
        for(j=0;j<size-i;j++){
            if(arr[j]>arr[greatest])
                greatest=j;
        }
        int temp=arr[size-i-1];
        arr[size-i-1]=arr[greatest];
        arr[greatest]=temp;
    }

    for(int i=0;i<size;i++)
        printf("%d ",arr[i]); 
    printf("\n");
}