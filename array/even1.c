#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n>0){
        if(n%2==0){
            sum += n;
        }  
        n--; 
    }
    printf("%d",sum);
}
