#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    int num=n+n-1;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <num; j++)
        {
            if(j==0)
            printf("%d", n);
            else if(j==num-1)
            printf("%d",n);
            else if(i==num)
                printf("%d", n);
            else if()
            printf("%d",n);
        }
        //printf("%d",temp);
        printf("\n");
        temp--;
    }
    return 0;
}