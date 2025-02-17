#include<stdio.h>
int main(){
    int num;
    printf("Enetr a number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }

    /*
    if(num & 1){
        printf("odd");
        }
        else{
        printf("Even");
        }
    */

}