#include<stdio.h>
void fibo(int n){
    int a=0,b=1,next;
for(int i=0;i<n;i++){
    printf("%d\n",a);
    next=a+b;
    a=b;
    b=next;
}

}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibo(n);
}