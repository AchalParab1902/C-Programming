#include <stdio.h>
int main()
{
    int rev = 0, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("Reverse number is %d", rev);
}