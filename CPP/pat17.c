#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < n-i; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}