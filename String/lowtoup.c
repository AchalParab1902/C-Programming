#include <stdio.h>
#include <string.h>
void lowtoup(char name[20])
{
    int len = strlen(name);
    for (int i = 0; i < len; i++){
        char ch = name[i];
        if(ch >=97 ){
        char new = (ch - 32);
        printf("%c\n", new);
    }
    else
    printf("%c\n",ch);
}
}
int main()
{
    char name[20];
    printf("Enter a name : ");
    scanf("%s", name);
    lowtoup(name);
}