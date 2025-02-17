#include <stdio.h>
int main()
{
    int n = 6;

    for (int i = 0; i <= n; i++)
    {
        printf("*");
        for (int k = 2; k <= n - i; k++)
        {
            if (i == 0)
                printf(" ");
        }
        for (int j = 0; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}