#include <stdio.h>
#include <stdlib.h>
void merge(int arr[],int temp[],int low,int mid,int high);
void sort(int arr[],int temp[],int low,int high);

int main(){
    int A[]={1,3,5,7,9,0,2,4,6,8};
    int B[]={0,2,4,6,8};
    
    //your code here
    int temp[10];    
    sort(A,temp,0,9);
    for(int i=0;i<10;i++)
        printf("%d ",A  [i]);
    printf("\n");
    
}

void merge(int arr[],int temp[],int low,int mid,int high){
    for(int i =low;i<=high;i++)
        temp[i]=arr[i];
    
    int p=low,q=mid+1,k=low;
    while(p<=mid&&q<=high){
        if(temp[p]<temp[q]){
            arr[k++]=temp[p++];
        }
        else{
            arr[k++]=temp[q++];
        }
    }
    while(p<=mid)
        arr[k++]=temp[p++];
    while(q<=high)
        arr[k++]=temp[q++];
}

void sort(int arr[],int temp[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        sort(arr,temp,low,mid);
        sort(arr,temp,mid+1,high);
        merge(arr,temp,low,mid,high);
    }
}