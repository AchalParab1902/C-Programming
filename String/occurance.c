// occurance of character in a string
#include<stdio.h>
#include<string.h>

int main(){
    char name[20],ch;
    printf("Enter a string : ");
    fgets(name, sizeof(name), stdin);
    printf("Enter a character: ");
    scanf("%c",&ch);
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]==ch){
            cnt++;
        }
    }
    printf("Occuranve of charatcter is : %d",cnt);
   
}