#include <stdio.h>
int main()
{
    int n = 10, cn = 5, a[100], b[100];
    printf("Enter a first array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i] != (i + 1))
        {
            printf("missing value is: ");
            printf("%d", i + 1);
            break;
        }
    }
}
