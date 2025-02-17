#include<stdio.h>
int main(){
    int a[100][100],row,col;
    printf("Enter number of rows and col :");
    scanf("%d%d",&row,&col);



for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&a[i][j]);
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
}