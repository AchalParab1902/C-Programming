#include <stdio.h>
int main()
{
    int rev = 0, num, rem, temp;
    printf("enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == temp)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
}