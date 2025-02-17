// remove duplicate character
#include<stdio.h>
#include<string.h>
void removeduplicates(char name[]){
//aabbcc
    int len=strlen(name),k;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;){
            if(name[i]==name[j]){
                for( k=j;k<len;k++){
                    name[k]=name[k+1];
                }
                name[k]='\0';
                len--;

            }
            else{
                j++;
            }
        }
    }
    printf("%s\n", name);
}
int main(){
    char name[20];
    printf("Enter a string : ");
    scanf("%s", &name);
    removeduplicates(name);
    
}