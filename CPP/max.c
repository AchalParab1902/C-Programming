#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter a fisrt number: ");
    scanf("%d",&num1);

    printf("Enter a second number: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("Maximum number is %d",num1);
    }
    else{
        printf("Maximum number is %d",num2);
    }

}