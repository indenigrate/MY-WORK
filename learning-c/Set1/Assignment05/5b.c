#include <stdio.h>

void main()
{
    printf("Enter a number n : ");
    int n;
    scanf("%d", &n);

    printf("Enter n integers \n");

    int arr[n];
    int max = arr[0], max2 = arr[0];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
    }

    printf("Second largest integer is %d \n", max2);
}