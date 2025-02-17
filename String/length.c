#include<stdio.h>
int main(){
    char a[]="HELLOWORLD";
    int cnt=1;
    for(int i=1;i<a[i]!='\0';i++){
        cnt++;
    }
    printf("count is: %d",cnt);
}