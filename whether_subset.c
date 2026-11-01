
#include <stdio.h>

int main()
{
    int a[50], b[50];
    int m, n, i, j, isSubset = 1;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n && isSubset; i++)
    {
        int found = 0;

        for (j = 0; j < m; j++)
        {
            if (b[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            isSubset = 0;
        }
    }

    if (isSubset)
    {
        printf("Second array is a subset of the first.\n");
    }
    else
    {
        printf("Second array is NOT a subset of the first.\n");
    }

    return 0;
}
