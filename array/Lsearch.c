#include<stdio.h>
int main(){
    int a[100],n,key;
    int flag=0;
    printf("enetr a number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a number for search: ");
    scanf("%d",&key);

    
    for(int i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("found !!");
    }
    else{
        printf("not found !! ");
    }


}