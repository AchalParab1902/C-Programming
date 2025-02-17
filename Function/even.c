#include<stdio.h>
int even(int n,int num){
    if(n>=num){
    if(num%2==0){
        printf("%d\n",num);
    }
    }
    num++;
    even(n,num);

}
int main(){
    int n;
    int num=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    even(n,num);
}