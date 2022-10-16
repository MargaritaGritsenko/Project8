#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
main()
{
    int n, a;
    int rez = 1;
    scanf("%d %d", &a, &n);
    for (int i = 0; i <= n; i++)
    {
        rez *= (a - i * n);
    }
    printf("%d", rez);
}