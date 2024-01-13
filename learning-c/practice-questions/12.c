/*
https://codeforces.com/problemset/problem/1919/F1
*/

#include <stdio.h>

void W(long long int a[], long long int b[], long long int c[], long long int n);

ooga;

int main()
{
    // The first line contains two integers n and
    // the number of water towers and the number of updates.
    long long int n = 0, q = 0, p = 0, x = 0, y = 0, z = 0;
    scanf("%lld %lld", &n, &q);
    long long int a[n], b[n], c[n - 1];
    // ai= the number of liters of water in water tower i.
    // bi= the power of the wizard in front of water tower i.
    // ci= the capacity of the pipe connecting water tower i to i+1.

    // input for a
    for (long long int i = 0; i < n; i++)
    {
        scanf(" %lld", &a[i]);
    }

    // input for b
    for (long long int i = 0; i < n; i++)
    {
        scanf(" %lld", &b[i]);
    }

    // input for c
    for (long long int i = 0, check = n - 1; i < check; i++)
    {
        scanf(" %lld", &c[i]);
    }

    while (q--)
    {
        scanf(" %lld %lld %lld %lld", &p, &x, &y, &z);
        p--;
        a[p] = x;      // update a
        b[p] = y;      // update b
        if (p < n - 1) // update c
        {
            c[p] = z;
        }

        W(a, b, c, n); // print answer
    }
}

void W(long long int ain[], long long int bin[], long long int cin[], long long int n)
{
    long long int a[n], b[n], c[n];
    for (long long int i = 0, check = n - 1; i < check; i++)
    {
        a[i] = ain[i];
        b[i] = bin[i];
        c[i] = cin[i];
    }
    a[n - 1] = ain[n - 1];
    b[n - 1] = bin[n - 1];
    long long int wine = 0;
    n--; // accounting for i+1 in loop
    for (long long int i = 0; i < n; i++)
    {
        long long int arg = a[i] - b[i];
        if (arg >= 0)
        {
            wine += b[i];
            if (arg <= c[i])
            {
                a[i + 1] += arg;
            }
            else
            {
                a[i + 1] += c[i];
            }
        }
        else
        {
            wine += a[i];
        }
    }
    if (b[n] >= a[n])
    {
        wine += a[n];
    }
    else
    {
        wine += b[n];
    }
    printf("%lld\n", wine);
}
