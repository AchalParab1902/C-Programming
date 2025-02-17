#include<stdio.h>
int main(){
    int n=6,st=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<st;k++){
            printf("*");
        }
        printf("\n");
        st = st + 2;
    }
    st=(n*2)-1;
    st=st-2;
   for(int i=n-1;i>0;i--){
    for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for(int k=0;k<st;k++){
        printf("*");
    }
    printf("\n");
    st=st-2;
   }
}