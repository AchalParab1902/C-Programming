#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int mul(int a, int b)
{
    return (a * b);
}
int div(int a, int b)
{
    return (a / b);
}
int main()
{
    int a, b,n;
    printf("Enter a fist number: ");
    scanf("%d", &a);
    printf("Enter a second number: ");
    scanf("%d", &b);

    printf("1.addition\n2.Subtraction\n3.multiplication\n4.division\n ");
    printf("enter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("addition is : ");
        printf("%d", add(a, b));
        break;
    case 2:
        printf("Subtraction is : ");
        printf("%d", sub(a, b));
        break;
    case 3:
        printf("Multiplication is : ");
        printf("%d", mul(a, b));
        break;
    case 4:
        printf("division is : ");
        printf("%d", div(a, b));
        break;

    default:
        printf("error: ");
        break;
    }
    
}