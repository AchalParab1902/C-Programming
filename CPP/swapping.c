#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first value: ");
    scanf("%d",&a);
    printf("Enter second value: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;

    /*
    temp=b;
    b=a;
    a=temp;

    a=a*b;
    b=a/b;
    a=a/b;

    a=a+b;
    b=a-b;
    a=a-b;
    
    */
    
  printf("After swapping:\n A=%d \n b=%d",a,b);
}