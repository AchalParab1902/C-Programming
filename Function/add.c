#include <stdio.h>
int main()
{
    int a[100][100],b[100][100], row1,row2,col1, col2,add[100][100];
    printf("Enter first number of rows and col :");
    scanf("%d%d", &row1, &col1);
    printf("Enter first number of rows and col :");
    scanf("%d%d", &row2, &col2);

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(row1==row2 && col1==col2){
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
       // printf("\n");
    }
    }
    else{
        printf("Addition not possible: ");
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%3d", add[i][j]);
        }
        printf("\n");
    }
    
}