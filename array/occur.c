#include<stdio.h>
int main(){
    int a[100],cnt=0,n,key;

    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a key: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(a[i]==key){
            cnt++;
        }
    }
    if(cnt==0){
        printf("%d is not found",key);
    }
    else{
        printf("occurrence of %d is %d",key,cnt);
    }

}