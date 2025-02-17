#include <stdio.h>
#define max 20
int main()
{
    int n, l1,l2,set1[max], set2[max], setUnion[max], k = 0;

    printf("Total number of elements in set1:");
    scanf("%d", &l1);

    for (int i = 0; i < l1; i++)
    {
        scanf("%d", &set1[i]);
    }
    printf("Total number of elements in set12:");
    scanf("%d", &l2);
    for (int i = 0; i < l2; i++)
    {
        scanf("%d", &set2[i]);
    }

    // printf("\n1.union\n2.intersection\n3.difference");

    for (int i = 0; i < l1; i++)
    {
        setUnion[k] = set1[i];
        k++;
    }
    for (int i = 0; i < l1; i++)
    {
        int flag = 0;
        for (int j = 0; j < l1; j++)
        {
            if (set2[i] == set1[j])
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 0)
        {
            setUnion[k] = set2[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%5d", setUnion[i]);
    }
}