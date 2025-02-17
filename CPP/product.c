#include<stdio.h>
int main(){
    int pid,price,qty;
    float total,CGST,SGST,finaltotal;
    char pname[100];

    printf("Enter product id: ");
    scanf("%d",&pid);

    printf("Enter product name: ");
    scanf("%s",&pname);

    printf("Enter product price: ");
    scanf("%d",&price);

    printf("Enter product Quantity: ");
    scanf("%d",&qty);

    CGST=price*0.06;
    SGST=price*0.06;

    total=price*qty;
    finaltotal=total+CGST+SGST;

    printf("\n\t\tProduct ID : \t\t%d",pid);
    printf("\n\t\tProduct Name : \t\t%s",pname);
    printf("\n\t\tProduct price : \t%d",price);
    printf("\n\t\tProduct Quantity : \t%d",qty);
    printf("\n\t\tTotal : \t\t%.2f",total);
    printf("\n\t\tCGST : \t\t\t%.2f",CGST);
    printf("\n\t\tSGST : \t\t\t%.2f",SGST);
    printf("\n\t\tFinal Total : \t\t%f",finaltotal);
}