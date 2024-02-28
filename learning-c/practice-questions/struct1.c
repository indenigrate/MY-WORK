#include <stdio.h>

void function(struct number *,double a,double b);

int main(){
    struct number{
        double real,imaginary;
    };

    
    struct number c1={.real=0.0,.imaginary=1.0},c2={.real=1.0,.imaginary=0.0},c3;
    c1=c2;
    c3.real=c1.real+c2.real;



}


void function(struct number *,double a,double b){

}