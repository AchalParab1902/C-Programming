#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter fisrt number: ");
    scanf("%d",&num1);

    printf("Enetr second nuumber: ");
    scanf("%d",&num2);

    printf("Enter third number: ");
    scanf("%d",&num3);

    if(num1>num2 & num1>num3 ){
        printf("maximum number is %d",num1);
    }
    else if (num2>num1 & num2>num3)
    {
        printf("maximum number is %d",num1);
    }
    else{
        printf("maximum number is %d",num3);
    }


}