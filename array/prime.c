#include <stdio.h>
int main()
{
    int n = 6, a[100], prime[100],pn=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        int data=a[i];
        int flag=1;
    for (int j = 2; j * j <= n; j++)
    {
        if (data % j == 0){
           flag=0;
           break;
        }
        
    }
    if(flag){
        prime[pn]=data;
        pn++;
    }
    
    }
    if(pn>0){
        for(int i=0;i<pn;i++)
        printf("\n%d",prime[i]);
    }
    else
    printf("No prime numbers");
}