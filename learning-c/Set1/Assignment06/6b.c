#include <stdio.h>
int digitSum(int a);
int eqDigitSum(int a, int b);

void main()
{
    printf("Enter two integers\n");
    int a, b;
    scanf("%d %d", &a, &b);

    if (eqDigitSum(a, b) == 0)
        printf("They don't have equal digit sum\n");
    else
        printf("They have equal digit sum\n");
}

int digitSum(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int eqDigitSum(int a, int b)
{
    if (digitSum(a) == digitSum(b))
        return 1;
    else
        return 0;
}