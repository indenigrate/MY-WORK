#include <stdio.h>

void main()
{
    printf("Enter an integer n : ");
    int n;
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d floating point numbers \n", n);
    float min2 = -4.7;
    for (int i = 0; i < n; i++)
    {
        scanf(" %f", &arr[i]);
        if (arr[i] < 0)
            min2 = arr[i];
    }
    float min1 = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= 0.0)
        {
            if (arr[i] < min1)
            {
                min1 = arr[i];
            }
            if (arr[i] < 0.0)
            {
                if (arr[i] > min2)
                    min2 = arr[i];
            }
        }
    }
    if (min1 > (min2 * (-1)))
        printf("Closest is %f \n", min2);
    else
        printf("Closest is %f \n", min1);
}
