#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k, choice;

    do
    {
        printf("\n----- MATRIX MENU -----\n");
        printf("1. Addition of two matrices\n");
        printf("2. Subtraction of two matrices\n");
        printf("3. Upper triangular matrix\n");
        printf("4. Lower triangular matrix\n");
        printf("5. Transpose of a matrix\n");
        printf("6. Product of two matrices\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            case 2:
                printf("Enter rows and columns of first matrix: ");
                scanf("%d%d", &r1, &c1);

                printf("Enter rows and columns of second matrix: ");
                scanf("%d%d", &r2, &c2);

                if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
                    r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                if (r1 != r2 || c1 != c2)
                {
                    printf("Operation not possible: dimensions must match.\n");
                    break;
                }

                printf("Enter first matrix:\n");
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        scanf("%d", &a[i][j]);

                printf("Enter second matrix:\n");
                for (i = 0; i < r2; i++)
                    for (j = 0; j < c2; j++)
                        scanf("%d", &b[i][j]);

                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                    {
                        if (choice == 1)
                            result[i][j] = a[i][j] + b[i][j];
                        else
                            result[i][j] = a[i][j] - b[i][j];
                    }

                printf("Result:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                        printf("%d\t", result[i][j]);
                    printf("\n");
                }
                break;

            case 3:
            case 4:
                printf("Enter order of square matrix: ");
                scanf("%d", &r1);

                if (r1 < 1 || r1 > 10)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                printf("Enter matrix elements:\n");
                for (i = 0; i < r1; i++)
                    for (j = 0; j < r1; j++)
                        scanf("%d", &a[i][j]);

                printf("Result:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < r1; j++)
                    {
                        if (choice == 3 && i <= j)
                            printf("%d\t", a[i][j]);
                        else if (choice == 4 && i >= j)
                            printf("%d\t", a[i][j]);
                        else
                            printf("0\t");
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Enter rows and columns: ");
                scanf("%d%d", &r1, &c1);

                if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                printf("Enter matrix elements:\n");
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        scanf("%d", &a[i][j]);

                printf("Transpose:\n");
                for (i = 0; i < c1; i++)
                {
                    for (j = 0; j < r1; j++)
                        printf("%d\t", a[j][i]);
                    printf("\n");
                }
                break;

            case 6:
                printf("Enter rows and columns of first matrix: ");
                scanf("%d%d", &r1, &c1);

                printf("Enter rows and columns of second matrix: ");
                scanf("%d%d", &r2, &c2);

                if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
                    r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                if (c1 != r2)
                {
                    printf("Multiplication is not possible.\n");
                    break;
                }

                printf("Enter first matrix:\n");
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        scanf("%d", &a[i][j]);

                printf("Enter second matrix:\n");
                for (i = 0; i < r2; i++)
                    for (j = 0; j < c2; j++)
                        scanf("%d", &b[i][j]);

                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        result[i][j] = 0;
                        for (k = 0; k < c1; k++)
                            result[i][j] += a[i][k] * b[k][j];
                    }
                }

                printf("Product:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                        printf("%d\t", result[i][j]);
                    printf("\n");
                }
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
