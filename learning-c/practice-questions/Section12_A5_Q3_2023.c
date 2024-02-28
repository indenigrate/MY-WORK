#include <stdio.h>
#define last 199
//void print_seq(int n);
void print_seq(int num);

int main(){
    
    int num;
    printf("enter the value of n\n");
    scanf("%d",&num);
    printf("print_seq\n");
    print_seq(num);
}

void print_seq(int num){
    
    int arr[20][100][100]={0};
    //[num][index of permutation][number of terms in each permutation]
    // arr[num][index of permutation][last] stores number of elements in that permutation
    // arr[num][last][last] stores the number of different permutation i.e. value of count for that num
    // [last] stores the number of permutation and the number of elements in each perm. in the last index
    arr[1][1][last]=1;
    arr[1][last][last]=1;
    arr[1][1][1]=1;
    
    arr[2][1][1]=1;
    arr[2][1][2]=1;
    arr[2][2][1]=2;
    arr[2][1][last]=2;
    arr[2][2][last]=1;
    arr[2][last][last]=2;

    arr[3][1][1]=1;
    arr[3][1][2]=1;
    arr[3][1][3]=1;
    arr[3][2][1]=2;
    arr[3][2][2]=1;
    arr[3][3][1]=1;
    arr[3][3][2]=2;
    arr[3][4][1]=3;
    arr[3][last][last]=4;
    arr[3][1][last]=3;
    arr[3][2][last]=2;
    arr[3][3][last]=2;
    arr[3][4][last]=1;

    int i=0,j=0,k=0;
    
    for(int n=4;n<=num;n++){
        if(n-1>0){
            int prev=n-1;
            for(i=1;i<=arr[prev][last][last];i++){
                ++arr[n][last][last];
                for(j=1;j<=arr[prev][i][last];j++){
                    arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=arr[prev][i][j];
                }
                arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=1;
            }
        }

        if(n-2>0){
            int prev=n-2;
            for(int i=1;i<=arr[prev][last][last];i++){
                arr[n][last][last]++;
                for(j=1;j<=arr[prev][i][last];j++){
                    arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=arr[prev][i][j];
                }
                arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=2;
            }
        }

        if(n-3>0){
            int prev=n-3;
            for(int i=1;i<=arr[prev][last][last];i++){
                arr[n][last][last]++;
                for(j=1;j<=arr[prev][i][last];j++){
                    arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=arr[prev][i][j];
                }
                arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=3;
            }
        }

    }

   
    for(i=1;i<=arr[num][last][last];i++){
        for(j=1;j<=arr[num][i][last];j++){
            printf("%d ",arr[num][i][j]);
        }
        printf("\n");
    }
    printf("Count=%d \n",arr[num][last][last]);
    
}