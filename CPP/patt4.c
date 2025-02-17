#include <stdio.h>
int main()
{
    int n = 7, cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            printf("  \t");
        }
        for (int j = 0; j <= i; j++)
        {
            // cnt=cnt+2;

            printf("%d\t", cnt);
            cnt = cnt + 2;
        }
        printf("\n");
    }
}