#include <stdio.h>
int main()
{
    int n;
   
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if(cnt==0){
            printf("%d\n",i);
        }
    }
}