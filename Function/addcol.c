#include <stdio.h>
int main()
{
    int a[100][100], row, col,j;
    int sum = 0;
    printf("Enter a number of row: ");
    scanf("%d", &row);
    printf("Enter a number of col: ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
           for (int i = 0; i < row; i++)
        {
            sum=0;
            for (j = 0; j < col; j++)
            {
                sum += a[j][i];
            }
            printf("%3d", sum);
    }
    
}