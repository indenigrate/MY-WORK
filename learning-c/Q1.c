#include <stdio.h>

int main(){
    printf("Please enter a number ");
    int num;
    scanf("%d",&num);
    num*=10;
    int option=0;
    int temp=num;
    int size=0;
    while(temp){
        size++;
        temp/=10;
    }
    //  size--;
    printf("size=%d\n",size);
    int array[32];
    temp=num;
    for(int i=size-1;i>=0;i--){
        array[i]=temp%10;
        temp/=10;
    }
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    
    printf("\n");

    while(1){
        printf("Choose option\n");
        printf("1.Locate\n2.Shift-right\n3.Shift-left\n4.Shift-up\n5.Shift-down\n6.Quit\n");
        scanf("%d",&option);
        if(option==1){
            printf("The zeroes are at postion\n");
            for(int i=0;i<size;i++){
                if(array[i]==0){
                    printf("%d  ",i+1);
                }
            }
            printf("\n");
        }

        if(option==3){
            printf("Enter number of times to shift ");
            int times,temp,check=0;
            scanf("%d",&times);
            while(times--){
                for(int i=0;i<size-1;i++){
                    if(array[i]==0&&i==0){
                        for(int j=0;j<size-1;j++){
                            temp=array[j];
                            array[j]=array[j+1];
                            array[j+1]=temp;
                        }
                        check=1;
    
                    }
                    else if(array[i+1]==0&&check==0){
                        temp=array[i];
                        array[i]=array[i+1];
                        array[i+1]=temp;
                    }
                }
                check=0;
            }
            for(int i=0;i<size;i++){
                printf("%d ",array[i]);
            }
            printf("\n");
        }
    }
}