#include<stdio.h>
int main(){
    int a[100],max,n;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<n;i++){
        // if(max<a[i]){
        //     max=a[i];
        printf("\n%d",a[i]);
        if(a[i]==41){
            break;
        }
 }
 
    }
    // printf("Maximum vakue is %d",max);

