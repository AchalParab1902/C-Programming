#include<stdio.h>
void demo(int num){
    if(num<=10){
        printf("%d\n",num);
        num++;
        demo(num);
    }


}
int main(){
    int num=1;
    demo(num);

}