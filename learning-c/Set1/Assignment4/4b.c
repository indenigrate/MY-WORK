#include <stdio.h>

void main()
{
    printf("Enter a number  ");
    int num;
    scanf("%d", &num);
    int gnum;
    for (int i = 0;; i++)
    {
        if (i * i * i > num)
        {
            gnum = i - 1;
            break;
        }
    }
    int a[30];
    int s1, s2, count=0;
    for (int i = 1; i <= gnum; i++)
    {
        for (int j = 1; j <= gnum; j++)
        {
            if (j == i)
                continue;
            s2 = i * i * i + j * j * j;
            for (int k = 1; k <= gnum; k++)
            {
                if (k == i || k == j)
                    continue;
                for (int l = 1; l <= gnum; l++)
                {
                    s1 = k * k * k + l * l * l;
                    if (l == i || l == j || l == k)
                        continue;
                    if (s1 == s2 && s1 < num)
                    {
                        if(s1>a[count]){
                            a[++count]=s1;
                            //printf("%d\n", s1);
                        }
                    }
                }
            }
        }
    }

    for(int i=0;i<30;i++){
        if(a[i]!=0){
            printf("%d\n",a[i]);
        }
    }
}