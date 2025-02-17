#include<stdio.h>
#include<string.h>
void reversed(char a[]){
    int length=strlen(a);
for(int i=0;i<length/2;i++){
    char temp=a[i];
    a[i]=a[length-i-1];
    a[length-i-1]=temp;
}
}
void reversed1(char b[]){
int length=strlen(b);
int start=0,end=length-1;
while(start<end){
    char temp=b[start];
    b[start++]=b[end];
    b[end--]=temp;
}
}

int main(){
    char a[]="HELLO";
    printf("Original string : %s\n",a);
   reversed(a);
    printf("Reversed string :%s",a);

    char b[]="ACHAL";
    printf("Original string : %s\n", b);
    reversed1(b);
    printf("Reversed string :%s", b);
}