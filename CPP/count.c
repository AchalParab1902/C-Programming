#include<stdio.h>
int main()
{
    int cnt=0,num;
    printf("enter a number: ");
    scanf("%d",&num);

    while(num>0){
        cnt++;
        num=num/10;
    }
    printf("Count of digit: %d",cnt);

}