#include <stdio.h>
int main()
{
    int n = 5;
    char alpha='A';
    // char temp=alpha;
    

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%C ", alpha++);
    //     }
    //     printf("\n");
    //     alpha=temp;
    // }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%C ", alpha+j);
        }

        printf("\n");
    }
}