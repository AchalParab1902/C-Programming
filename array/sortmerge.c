#include <stdio.h>
int main()
{
    int n1 = 4,n2=3, a[100], b[100], c[100],i,j, k = 0;
    printf("Enter a first array : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a second array : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2 - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    for (int i = 0,j=0; i < n1&&j<n2;)
    {

        // for (int j = 0; j <= n; j++)
        // {
            if (a[i] > b[j])
            {
                c[k] = b[j];
                j++;
                k++;
              
            }
            else if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
                k++;
               
            }
            else{
                c[k] = b[j];
                j++;
                k++;
                c[k] = a[i];
                i++;
                k++;
            }
            
        // }
            while (i < n1)
            {
                c[k] = a[i];
                i++;
                k++;
            }
            while (j < n2)
            {
                c[k] = b[j];
                j++;
                k++;
            }
    }

printf("sorted array : ");
for (int i = 0; i < k; i++)
{
    printf("\n%d", c[i]);
}
}
