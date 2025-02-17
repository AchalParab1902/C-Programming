#include <stdio.h>
int main()
{
    int n = 7, cn = 7, a[100], b[100];
    printf("Enter a first array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    while (n!=2)
    {
        i = 0;
        while (i<n-1)
        {
            a[i] = (a[i] + a[i + 1])%10;
            i++;
        }
        n--;
        printf("\nnew array");

        for (int j = 0; j < n; j++)
        {
            // a[j] = b[j];
            printf("\n%d", a[j]);
        }
        // n = i;
    }
}