#include<stdio.h>
int main(){
    printf("Enter number of days\n");
    int d;
    scanf("%d",&d);
    printf("Years=%d\nWeeks=%d\nDays=%d\n",d/365,(d%365)/7,(d%365)%7);
}