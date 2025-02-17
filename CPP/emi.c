#include<stdio.h>
int main(){
    float amt,roi,duration,emi;

    printf("Enter a amount: ");
    scanf("%f",&amt);

    printf("Enter a ROI: ");
    scanf("%f",&roi);

    printf("Enter a Duration (in years): ");
    scanf("%f",&duration);

    roi=roi*duration;
    amt +=(amt*roi)/100;
    emi=amt/(duration*12);

    printf("\nEmi is %.2f",emi);

}