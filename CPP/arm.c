#include<stdio.h>
#include<math.h>
int main()
{
    int cnt=0,num,rem,temp,result=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        cnt++;
        num=num/10;
    }
    //printf("count is %d",cnt);
    num=temp;

    while (num>0)
    {
        rem=num%10;
        result=result+pow(rem,cnt);
        //result=result+(rem);
        num=num/10;
        /* code */
    }
    if(result==temp){
        printf("Armstrong number");
    }
    else{
        printf("not armstrong number");
    } 
}