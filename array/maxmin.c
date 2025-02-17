#include<stdio.h>
int main(){
    int a[100],max,min,n;
    printf("enter a number : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        max = a[0];
        min = a[0];
    }
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        else if(min>a[i]){
            min=a[i];
        }
    }
    printf("maximum number is %d \n minimum number is %d",max,min);

   }