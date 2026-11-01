#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows (1-4): ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("*\n");
            break;
        case 2:
            printf("* *\n");
            printf("* * *\n");
            break;
        case 3:
            printf("* *\n");
            printf("* * *\n");
            printf("* * * *\n");
            break;
        case 4:
            printf("* *\n");
            printf("* * *\n");
            printf("* * * *\n");
            printf("* * * * *\n");
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}
