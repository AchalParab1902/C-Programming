#include<stdio.h>
void add(int a,int b){
    printf("%d\n",a+b);

}
void sub(int a,int b){
    printf("%d\n",a-b);

}
void mul(int a,int b){
    printf("%d\n",a*b);
}
void div(int a,int b){
    printf("%d\n",a/b);
}
int main(){
    int a,b;
    printf("Enter a fist number: ");
    scanf("%d",&a);
    printf("Enter a second number: ");
    scanf("%d",&b);

    printf("addition is : ");
    add(a,b);
    printf("Subtraction is : ");
    sub(a,b);
    printf("Multiplication is : ");
    mul(a,b);
    printf("division is : ");
    div(a,b);


}

//what is function-it is set of instruction to perform some particular task.
//why we use function
