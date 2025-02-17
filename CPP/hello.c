#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\n\t\tAddition of %d and %d is %d", a, b, (a + b));
    printf("\n\t\tSubtraction of %d and %d is %d", a, b, (a - b));
    printf("\n\t\tMultiplication of %d and %d is %d", a, b, (a * b));

    if (b != 0)
    {
        printf("\n\t\tDivision of %d by %d is %d", a, b, (a / b));
    }
    else
    {
        printf("\n\t\tDivision by zero is not allowed.");
    }

    return 0;
}