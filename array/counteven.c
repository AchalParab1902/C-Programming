#include<stdio.h>
int main(){
    int a[100],cnt1=0,cnt2=0,n=5;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt1++;
        }
        else if(a[i]%2!=0){
            cnt2++;
        }
    }
    printf("count of even number is %d and count of odd number is %d",cnt1,cnt2);
}