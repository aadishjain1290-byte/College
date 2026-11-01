
#include <stdio.h>

void hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, aux, to);

    printf("Move disk %d from %c to %c\n", n, from, to);

    hanoi(n - 1, aux, to, from);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    if (n < 1 || n > 30)
    {
        printf("Enter a number of disks between 1 and 30.\n");
        return 1;
    }

    hanoi(n, 'A', 'C', 'B');

    printf("Total moves = %ld\n", (1L << n) - 1);

    return 0;
}
