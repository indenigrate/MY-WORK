#include <stdio.h>

int check(int a,int arr[],int size);
void printarray(int a[],int size);

void main(){
    printf("Enter two number :\n");
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Enter %d numbers and %d numbers \n",a,b);
    int arr1[a],arr2[b];

    for(int i=0;i<a;i++){
        scanf(" %d",&arr1[i]);
    }

    for(int i=0;i<b;i++){
        scanf(" %d",&arr2[i]);
    }

    int u=a>=b?a:b;
    int add[a+b],intersect[u],subtract[a];
    int k=0,l=0,m=0;

    for(int i=0;i<a+b;i++){
        if(i<a){
            add[i]=arr1[i];
            k=i;
            if(check(arr1[i],arr2,b)==1){
                intersect[l++]=arr1[i];
            }
            else{
                subtract[m++]=arr1[i];
            }

        }
        if(i>=a){
            if(check(arr2[i-a],arr1,a)==0){
                add[++k]=arr2[i-a];
                printf("%d\n",check(arr2[i-a],arr1,a));   
            }
        }

    }
    
    printarray(add,++k);
    printarray(intersect,l);
    printarray(subtract,m);
}

void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int check(int a,int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==a){
            return 1;
        }
    }
    return 0;
}