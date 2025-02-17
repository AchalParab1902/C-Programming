#include <stdio.h>
int main()
{
    int a[100], n = 5, key;
    int low, high, mid;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // printf("after sorting :");
    // for (int i = 0; i < n; i++)
    //     printf("\n%d", a[i]);

    printf("Enter a number for search: ");
    scanf("%d", &key);

    high = n - 1;
    low = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            printf("Found !!");
            return 0;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("not found !!");
}