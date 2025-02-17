#include<stdio.h>
int main(){
    int eid;
    char ename[100];
    float bs,da,tax,pf,ts,hra,ta,ma;
    printf("enter ID: ");
    scanf("%d",&eid);
    printf("enter name: ");
    scanf("%s",ename);
    printf("basic salary: ");
    scanf("%f",&bs);
    /*printf("DA (%%): ");
    scanf("%f",&da);
    printf("HRA (%%): ");
    scanf("%f",&hra);
    printf("TAX (%%): ");
    scanf("%f",&tax);
    printf("PF: ");
    scanf("%f",&pf);*/
    hra=bs*0.4;
    ta=bs*0.09;
    da=bs*0.06;
    ma=bs*0.08;
    pf=bs*0.07;

ts=bs+hra+ta+da+ma+-pf;

   // ts=bs+(bs*((da+hra-tax)/100));
    //ts=ts+pf;
    printf("\nenter ID %d",eid);
    printf("\nenter name %s",ename);
    printf("\nDA %.2f",da);
    printf("\n--------------------------------------");
    printf("\nHRA %.2f",hra);
    printf("\nTAX %.2f",tax);
    printf("\nPF %.2f",pf);
    printf("\nbasic salary %.2f",bs);
    printf("\ntotal  %.2f",ts);

}