#include<stdio.h>
int main(){
    int a[100],n,sum=0,cnt=0;
    printf("enter a number : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        //scanf("%d",&a[i]);
        cnt++;
         sum+=cnt;
    }
    printf("Sum of array is : %d",sum);
}