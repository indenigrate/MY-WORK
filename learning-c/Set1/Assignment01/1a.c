#include <stdio.h>

int main(){
    float d,f;
    printf("Enter number of kilometers travelled and litres of fuel consumed\n");
    scanf("%f",&d);
    scanf("%f",&f);
    printf("Average fuel consumption %.2f\n",(float)(d/f));

}