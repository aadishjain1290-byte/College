
#include <stdio.h>

int main()
{
    int n;

    printf("Enter rows: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid number of rows.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
