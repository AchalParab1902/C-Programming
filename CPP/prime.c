#include <stdio.h>
int main()
{
    int n, cnt = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // for(int i=1;i<=n;i++)
    // for(int i=2;i<=sqrt(n);i++)
    // for(int i=2;i<=n/i;i++)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 0)
    {
        printf("Prime number");
    }
    else
    {
        printf("non prime number");
    }
}