#include <stdio.h>
int main(){
    printf("Enter temperature in fahrenheit scale]\n");
    float tempf,tempc;
    scanf("%f",&tempf);
    tempc=(tempf-32.00)/1.8;
    printf("Temperature in celcius scale %.3f \n",tempc);
}