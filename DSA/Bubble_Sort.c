#include <stdio.h>

int main(){
    int array[]={3,532,62,54,64,85,24,86,43,523,7745,5477,687,633,6,6354,6538,79957,3};
    
    for(int *i=&array[18];i>=array;i--){
        

        for(int *j=array;j<i;j++){    
            
            if(*j>*(j+1)){
                int temp =*j;
                *j=*(j+1);
                *(j+1)=temp;
               }
        }    
    }
    printf("check\n");
    for(int *i=array;i<=&array[18];i++){
        
        printf("%d  ",*i);

    }
    printf("\n");

}