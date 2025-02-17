// count vowels and consonent
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("enter a string: ");
    scanf("%s", &name);
    int vowels=0;
    int consonent=0;
    int len=strlen(name);

    for (int i = 0; i < len; i++)
    {
        
        if (name[i] == 'a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            vowels++;
        }
        else{
            consonent++;
        }
    }
    printf("VOWELS ARE : %d\n",vowels);
    printf("CONSONENT ARE : %d",consonent);
}