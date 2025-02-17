//
#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    char name1[20];
    int i;
    printf("enter a string: ");
    scanf("%s", &name);
    printf("enter a string2: ");
    scanf("%s", &name1);
    
   for(i=0;i<strlen(name1);i++){
    name[i]=name1[i];

   }
   name[i]='\0';
    printf("%s\n",name);
    printf("%s",name1);
}