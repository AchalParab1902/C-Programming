#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter a name : ");
    scanf("%s", name);

    int len = strlen(name);
    printf("%d\n", len);
    int flag = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (name[i] != name[len - i - 1])
        {
            flag++;
            break;
        }
    }
    if (flag== 1)
        printf("NOT PALINDROME");
    else
        printf("PALINDROME");
}