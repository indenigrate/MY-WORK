#include <stdio.h>
int arrayMax(int a[],int size);

void main(){
    printf("Enter an integer ");
    int size;
    scanf("%d",&size);
    printf("Enter the elements of array \n");
    int array[size];
    printf("Max element is %d\n",arrayMax(array,size));
}

int arrayMax(int a[],int size){
    int Max;
    scanf(" %d",&Max);
    a[0]=Max;
    for(int i=1;i<size;i++){
        scanf(" %d",&a[i]);
        if(a[i]>Max){
            Max=a[i];
        }
    }
    return Max;
}