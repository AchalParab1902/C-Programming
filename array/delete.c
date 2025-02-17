#include <stdio.h>
int main()
{
    int a[100], n = 6, key;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a key: ");
    scanf("%d", &key);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (int j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            flag = 1;
            continue;
        }
    }
    if (flag)
    {
        printf("Successfully deleted...");
    }
    else
    {
        printf("not found..");
    }
    for (int i = 0; i < n; i++)
        printf("\n%d", a[i]);
}