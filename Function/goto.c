#include<stdio.h>
int main(){
    int num=1;
    demo:
    if(num<=10){
        printf("%d\n", num);
        num++;
        goto demo;
    }
    
    
    return 0;
    
}

/*calling function-function which call to another function
called function-a function which comes under execution

return -transfer the control called function back to the calling function
*/