
#include <stdio.h>

int main()
{
    int a[50], n, sum = 0, *p;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;

    for (int i = 0; i < n; i++)
    {
        sum += *(p + i);
    }

    printf("Sum = %d\n", sum);

    return 0;
}
