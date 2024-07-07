#include <stdio.h>
int call=0;

void quicksort(int arr[],int l,int r){
    if(l>r)
        return;
    int key=l;
    int right=r;
    r=r+1;
    while(l<r){
        while(arr[--r]>arr[key]);
        while(arr[++l]<=arr[key]);
        
        if(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
        }
    }
    int temp=arr[key];
    arr[key]=arr[r];
    arr[r]=temp;
    quicksort(arr,key,r-1);
    quicksort(arr,r+1,right);
}

void quicksort2(int arr[],int l,int r){
        if(l>r)
            return;
        int key=r;
        int left=l;
        --l;
        while(l<r){
            while(arr[++l]<arr[key]);
            while(arr[--r]>=arr[key]);
            if(l<r){
                int temp=arr[l];
                arr[l]=arr[r];
                arr[r]=temp;
            }
        }
        //swap key with l
        int temp=arr[key];
        arr[key]=arr[l];
        arr[l]=temp;
        quicksort2(arr,left,l-1);
        quicksort2(arr,l+1,key);
    }

int main(){
    int arr[]={1,5,6,3,8,9,2,4,5,7};
    int size=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]); 
    printf("\n");


    quicksort2 (arr,0,size-1);

    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    
}