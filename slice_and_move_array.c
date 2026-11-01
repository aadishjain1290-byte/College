#include <stdio.h>

int main()
{
    int a[50], temp[50], n, k;

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

    printf("Enter split position: ");
    scanf("%d", &k);

    if (k < 0 || k > n)
    {
        printf("Invalid position.\n");
        return 1;
    }

    for (int i = 0; i < k; i++)
    {
        temp[i] = a[i];
    }

    for (int i = k; i < n; i++)
    {
        a[i - k] = a[i];
    }

    for (int i = 0; i < k; i++)
    {
        a[n - k + i] = temp[i];
    }

    printf("Result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
