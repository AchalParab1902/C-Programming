#include<stdio.h>
int main(){
    int num,n,meter,inch;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("1.KM\n2.Meters\n3.Inches\n");
    scanf("%d",&n);
    switch(n){
        case 1:{
            printf("%d Kilometer", num);
            break;
        }
        case 2:{
            meter=num*1000;
            printf("%d meter",meter);
            break;
        }
        case 3:{
            inch=num*1000*39.37;
            printf("%d Inches ",inch);
            break;
        }
        default:{
            printf("Invalid choicve");
            break;
        }

    }
}