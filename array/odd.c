#include <stdio.h>
int main()
{
    int a[100], even, n;
    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("\n %d", a[i]);
        }
    }
}
