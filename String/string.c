// NOTES:
// string is character array
// 

#include<stdio.h>
#include<string.h>
int main(){
    int roll[100];
    char name[50][100],add[100][100],div[20][100],mobile_num[50][100];
    float marks[100];

    int n;
    printf("enter value n :\n");
    scanf("%d",&n);
    printf("enter a student details:\n");

    for(int i=0;i<n;i++){
        printf("Enter a roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter a name: ");
        gets(name[i]);
        gets(name[i]);

        printf("Enter a address: ");
        scanf("%s", add[i]);

        printf("Enter a Division: ");
        scanf("%s", div[i]);

        printf("Enter a mobile number: ");
        scanf("%s", mobile_num[i]);

        printf("Enter marks: ");
        scanf("%f", &marks[i]);

        
    }

    for (int i = 0; i < n; i++)
    {
        printf("Roll no: %d\n", roll[i]);
        printf("Name : %s\n", name[i]);
        printf("Address: %s\n", add[i]);
        printf("Division : %s\n", div[i]);
        printf("Mobile number : %s\n", mobile_num[i]);
        printf("marks : %f\n", marks[i]);
        printf("\n");
    } 
}