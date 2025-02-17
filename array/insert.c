#include <stdio.h>
int main()
{
    int a[100], n = 5, pos, val;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter a position: ");
    scanf("%d", &pos);
    if (pos >= 0 && pos <= n)
    {

        printf("enter a value: ");
        scanf("%d", &val);

        for (int i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = val;
        n++;
    }
    else{
        printf("position invalid ");
    }
    for (int i = 0; i < n; i++)
        printf("\n%d", a[i]);
}