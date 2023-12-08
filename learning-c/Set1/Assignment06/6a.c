#include <stdio.h>
int integerPower(int base, int exponent);
void main()
{
    printf("Enter two numbers \n");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d to the power %d is %d\n", a, b, integerPower(a, b));
}
// using recursion
//  int integerPower(int base,int exponent){
//      if(exponent<=0)
//          return 1;
//      return base*integerPower(base,exponent-1);
//  }

int integerPower(int base, int exponent)
{
    int ans = 1;
    for (int i = 0; i < exponent; i++)
    {
        ans *= base;
    }
    return ans;
}