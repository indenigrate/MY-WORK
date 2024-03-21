#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
char rev[100];
int i=0;

void revstr(char *s){
    
    if(*(s+1)){
        revstr(s+1);
    }
    rev[i++]=*s;
}

void addrows(int ***p,int row,int numcols){
    //***p=&m where m{int **m}
    //int row=(int)sizeof(*p);
    int**arr=*p;
    printf("rows are %d\n",row);
    for(int i=0;i<10;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    arr=(int**)realloc(arr,sizeof(int*)*row);
    arr[row-1]=(int*)malloc(sizeof(int)*numcols);
    for(int i=0;i<numcols;i++){
         arr[row-1][i]=i;
    }
    *p=arr;
    printf("endof addrow\n");
}
int main(){
    int **m;
    m=malloc(sizeof(int*)*10);
    printf("size is %d\n",(int)(sizeof(m)));

    for(int i=1;i<=10;i++){
        m[i-1]=(int *)malloc(sizeof(int)*i);
        for(int j=0;j<i;j++){
            m[i-1][j]=j;
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    addrows(&m,11,7);

    for(int i=0;i<11;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    // for(int i=0;i<11;i++){
    //     for(int j=0;j<sizeof(m[i]);j++){
    //         printf("%d ",m[i][j]);
    //     }
    //     printf("\n");
    // }

//change

    // int (*a)[10];
    // a=(int(*)[10])malloc(sizeof(int)*50);
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<10;j++){
    //         a[i][j]=j;
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

//change

    // int col=8,row=6;
    // int (*q)[col]=malloc(sizeof(int)*row*col);
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         q[i][j]=j;
    //         printf("%d ",q[i][j]);
    //     }
    //     printf("\n");
    // }

//change

}
