#include <stdio.h>
int main()
{
    int n = 5,a[100], b[100],i,cn=2;
    printf("Enter a first array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while(cn>0){
    i=0;
    b[i]=a[n-1];
    for(int i=1;i<n;i++){
        b[i]=a[i-1];
    }
    for(int i=0;i<n;i++){
        printf("\n%d",b[i]);
    }
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        a[j] = b[j];
        //printf("\n%d", a[j]);
    }
    cn--;
    }
}
