/*
Write a program to print the pattern:

input :5

output:

*       *
  *   *
    *
  *   *
*       *

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    if(n%2 == 0) n = n/2;
    else n = n/2 + 1;

    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = i+1; j < n; j++)
        {
            printf("  ");
        }
        printf("* ");
        for(int j = 1; j <= 2*i - 1; j++)
        {
            printf("  ");
        }
        printf("* ");
        printf("\n");
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            printf("  ");
        }
        printf("* ");
        for(int j = 1; j <= 2*i - 1; j++)
        {
            printf("  ");
        }
        if(i != 0) printf("* ");
        printf("\n");
    }

    return 0;
}