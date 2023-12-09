/*
 * https://codeforces.com/problemset/problem/1811/B
 */
#include <stdio.h>

void question();

int main()
{
    int NumOfTestCases;
    scanf("%d", &NumOfTestCases);
    for (int i = 0; i < NumOfTestCases; i++)
    {
        question();
    }
}

void question()
{
    int n, x1, x2, y1, y2;
    scanf("%d %d %d %d %d", &n, &x1, &y1, &x2, &y2);
    if (x1 > n / 2)
    {
        x1 = n - x1 + 1;
    }
    if (x2 > n / 2)
    {
        x2 = n - x2 + 1;
    }
    if (y1 > n / 2)
    {
        y1 = n - y1 + 1;
    }
    if (y2 > n / 2)
    {
        y2 = n - y2 + 1;
    }

    int l1, l2;

    if (y1 >= x1)
        l1 = x1;
    else
        l1 = y1;

    if (y2 >= x2)
        l2 = x2;
    else
        l2 = y2;

    printf("%d\n", (l1 - l2) >= 0 ? (l1 - l2) : (l2 - l1));
}