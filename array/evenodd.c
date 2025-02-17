#include <stdio.h>
int main()
{
    int a[100], even[100], odd[100], n;
    int en, on;
    en = on = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0)
        {
            even[en] = a[i];
            en++;
        }
        else
        {
            odd[on] = a[i];
            on++;
        }
    }
    if(en!=0){
    
    printf("even array: ");
    for (int i = 0; i < en; i++)
    {
        printf(" %d ", even[i]);
    }
    }
    if(on!=0){
    printf("\n");
    printf("odd array: ");
    for (int i = 0; i < on; i++)
    {
        printf(" %d ", odd[i]);
    }
}
}
