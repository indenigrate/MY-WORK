#include <stdio.h>
#define last 199
//void print_seq(int n);
void print_seq2(int num);

int main(){
    
    int num;
    
    scanf("%d",&num);
    
    printf("Check\n");
    print_seq2(num);
}

// void print_seq(int n){
//     int count =0,rem2=0,rem1=0;
//     for(int i=n;i>=0;i-=3){

//         // for(int max3=i/3;max3>0;max3--){
//         //     printf("3 ");
            
//         // }

//         int rem=n-i+i%3;

//         for(int j=rem;j>=0;j-=2){

//             rem1=rem-j+j%2;

//             if(rem!=n){
//                 for(int max3=i/3;max3>0;max3--){
//                     printf("3 ");
//                     }
//                 }
                    
//                     for(int max2=j/2;max2>0;max2--){
//                         printf("2 ");
//                     }
//             for(int k=0;k<rem1;k++){
                
//                     printf("1 ");
                
//             }
//             printf("\n");
//             count++;
//         }
//     }
//     printf("\nCount=%d\n",count);
// }

void print_seq2(int num){
    
    int arr[20][100][100]={0};
    //[n][index of permutation][number of terms in each count]
    // arr[n][count][last] stores number of elements in that permutation
    // arr[n][last][last] stores the number of different permutation i.e. vlue of count for that n
    arr[1][last][1]=1;
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
        //correct till here

        printf("check %d\n",i);
        if(n-2>0){
            int prev=n-2;
            for(int i=1;i<=arr[prev][last][last];i++){
                arr[n][last][last]++;
                for(j=1;j<=arr[prev][i][last];j++){
                    // arr[n][arr[n][last][last]-1][++arr[n][arr[n][last][last]-1][last]]=arr[prev][i][j];
                    arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=arr[prev][i][j];
                }
                // arr[n][arr[n][last][last]-1][++arr[n][arr[n][last][last]-1][last]]=1;
                // arr[n][arr[n][last][last]-1][++arr[n][arr[n][last][last]-1][last]]=1;
                arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=2;
            }
        }

        if(n-3>0){
            int prev=n-3;
            for(int i=1;i<=arr[prev][last][last];i++){
                arr[n][last][last]++;
                for(j=1;j<=arr[prev][i][last];j++){
                    // arr[n][arr[n][last][last]-1][++arr[n][arr[n][last][last]-1][last]]=arr[prev][i][j];
                    // arr[n][arr[n][last][last]-2][++arr[n][arr[n][last][last]-2][last]]=arr[prev][i][j];
                    arr[n][arr[n][last][last]][++arr[n][arr[n][last][last]][last]]=arr[prev][i][j];
                }
                // arr[n][arr[n][last][last]-1][++arr[n][arr[n][last][last]-1][last]]=1;
                // arr[n][arr[n][last][last]-1][++arr[n][arr[n][last][last]-1][last]]=2;
                // arr[n][arr[n][last][last]-2][++arr[n][arr[n][last][last]-2][last]]=2;
                // arr[n][arr[n][last][last]-2][++arr[n][arr[n][last][last]-2][last]]=1;
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