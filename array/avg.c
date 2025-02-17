#include <stdio.h>
int main()
{
    int avg = 0, n,sum=0;
    int a[100];

    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    avg=sum/n;
    printf("average of %d number is %d",n,avg);
}