#include <stdio.h>
int main()
{
    int a[100], min, n;
    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("Maximum vakue is %d", min);
}