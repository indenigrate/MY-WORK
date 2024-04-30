#include <stdio.h>

int main(){
    int arr[]={1,5,6,3,8,9,2,4,5,7};
    int size=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]); 
    printf("\n");
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    
}