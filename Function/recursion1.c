#include <stdio.h>
/*Square*/
// int square(int num)
// {
//    num*=num;
//    printf("Square is %d", num);
//    return num;
// }
// int main()
// {
//     int num;
//     printf("enter a number : ");
//     scanf("%d",&num);
//     square(num);

// }

// swapping using function

// int swapping(int num1,int num2){
//     int temp=num1;
//     num1=num2;
//     num2-temp;
//     printf("num1 =%d and num2 =%d",num1,num2);
// }
// int main(){
//     int num1,num2;
//     printf("Enter a first number : ");
//     scanf("%d",&num1);
//     printf("Enter a second Number : ");
//     scanf("%d",&num2);
//     swapping(num1,num2);

// }

// even odd chcek using function

// int main()
// {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     evenodd(num);
// }
// int evenodd(int num)
// {
//     if (num % 2 == 0)
//     {
//         printf("Even");
//     }
//     else
//     {
//         printf("Odd");
//     }
// }
int reverse(int num)
{
    if (num > 0)
    {
        int rev = num % 10;
        num /= 10;

        printf("%d", rev);
        reverse(num);
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    reverse(num);
}