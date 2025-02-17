#include<stdio.h>
int main(){
    int rollno;
    char sname[100];
    int sub1,sub2,sub3,total;
    float perc;

    printf("Enter Roll number: ");
    scanf("%d",&rollno);
    printf("Enter name: ");
    scanf("%s",sname);
    printf("Enter three subject: ");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
     total=sub1+sub2+sub3;
     perc=total/3;

     printf("\n\t\tRoll number: %d",rollno);
     printf("\n\t\tName: %s",sname);
     printf("\n\t\tMAths: %d",sub1);
     printf("\n\t\tChemistry: %d",sub2);
     printf("\n\t\tPhysics: %d",sub3);
     printf("\n\t\tTotal marks: %d",total);
     printf("\n\t\tPercentage: %.2f",perc);
     printf("\n\t\tPercentage: %.2f",perc);
     printf("\n\t\tPercentage: %.2f",perc);
     printf("\n\t\tPercentage: %.2f",perc);
     printf("\n\t\tPercentage: %.2f",perc);
     printf("\n\t\tPercentage: %.2f",perc);




}