#include <stdio.h>
#include <string.h>
void reversedword(char name[50])
{

    int start = 0, end = strlen(name) - 1;
    while (start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }
    start = 0;
    for (int i = 0; i <= strlen(name); i++)
    {
        if (name[i] == ' ' || name[i] == '\0')
        {

            int left = start, right = i - 1;
            while (left < right)
            {
                char temp = name[left];
                name[left] = name[right];
                name[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }
    }
}

int main()
{
    char name[50], ch;
    printf("Enter a string : ");
    fgets(name, sizeof(name), stdin);
    printf("Origonal string is %s", name);
    reversedword(name);
    printf("reversed string is: %s", name);
}