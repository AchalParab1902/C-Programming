#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    int start,length;
    printf("Enter a string : ");
    scanf("%s", &name);
    printf("Enter a start point: ");
    scanf("%d",&start);
    printf("Enter a length: ");
    scanf("%d",&length);
    for(int i=start-1;i<strlen(name)&&i<(start-1)+length;i++){
        printf("%c",name[i]);
    }
}