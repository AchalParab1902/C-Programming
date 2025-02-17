#include <stdio.h>
int main()
{
    int n = 5;
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            if (j%2==0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }
}