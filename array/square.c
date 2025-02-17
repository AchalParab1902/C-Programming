#include<stdio.h>
int main(){
    int n=6,a[100],square[100],cube[100],k;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        square[i]=a[i]*a[i];
        cube[i]=a[i]*a[i]*a[i];
        
    }
    printf("square of the arrays are: ");
    for (int i=0;i<n;i++){
        printf("\n%d",square[i]);

    }
    
    printf("\ncube of the arrays are: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", cube[i]);
    }
}