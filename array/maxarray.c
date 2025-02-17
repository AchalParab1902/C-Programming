#include<stdio.h>
#include "array.h"
int main(){
    int n,arr[100];
    printf("Enter a n: ");
    scanf("%d",&n);
    accept(arr,n);
    int max=arr[0];
    int min=arr[0];
    int secmax=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];

    }
    for(int i=0;i<n;i++){
        if (secmax != max)
        {
            if (secmax < arr[i])
            {
            
                secmax=arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("second Max num is : %d\n", secmax);
    printf("Max num is : %d\n",max);

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("Min num is : %d", min);
}