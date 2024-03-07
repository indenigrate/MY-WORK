#include <stdio.h>
#include <stdlib.h>

// Section 12 Assignment 6 Question2
// void P(int m,int i,int n){
//     static int count;
//     int days_left=n-i;
//     int max_doable_hours=m-days_left;
    
//     if(days_left<=0){
//         count++;
//         printf("%d\n",count);
//         return;
//     }
//     max_doable_hours=max_doable_hours>24?24:max_doable_hours;
//     for(int j=1;j<=max_doable_hours;j++){
//         P(m-j,i+1,n);
//     }
// }

void func(int max,int column,int arr[],int count){
    printArr(arr,column);
    while(){
        if(arr[column-count]==max){
            count++;
            arr[column-count]++;
        }
    }
    if(column-count)
    if(arr[column-1]==max){
        arr[column-2]++;
        arr[column-1]=1;
        funct(max,column,arr);
    }
    
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d "arr[i]);
    }
    printf("\n");
}
int main(){
    int count =0;
    int m=24;
    int n=10;
    
    //P(m,1,n);

    // int *p=(int *)malloc(sizeof(int));
    // int *q=p;
    // *p=10;
    // printf("%p %p %d %d\n",p,q,*p,*q);
    // free (p);
    // printf("%p %p %d %d\n",p,q,*p,*q);
    int arr[column];
    for(int i=0;i<column;i++){
        column[i]=i+1;
    }
    func(max,column,arr,1);
}