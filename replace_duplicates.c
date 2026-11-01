
#include <stdio.h>

int main()
{
    int a[50], dup[50] = {0}, n, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
    {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                dup[i] = 1;
                count++;
                break;
            }
        }
    }

    printf("Total duplicate elements = %d\n", count);
    printf("Array after replacement: ");

    for (int i = 0; i < n; i++)
    {
        if (dup[i])
            printf("* ");
        else
            printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
