
#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (n > 1 && sum == n);
}

int main()
{
    int low, high;

    printf("Enter the interval (low high): ");
    scanf("%d %d", &low, &high);

    if (low > high)
    {
        printf("Invalid interval.\n");
        return 1;
    }

    printf("Perfect numbers between %d and %d: ", low, high);

    for (int n = low; n <= high; n++)
    {
        if (isPerfect(n))
        {
            printf("%d ", n);
        }
    }

    printf("\n");

    return 0;
}
