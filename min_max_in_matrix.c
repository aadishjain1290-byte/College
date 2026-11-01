
#include <stdio.h>

int main()
{
    int a[10][10], r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int min = a[0][0];
    int max = a[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }

            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("Minimum = %d, Maximum = %d\n", min, max);

    return 0;
}
