
#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    int ch, lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter file name: ");
    scanf("%99s", name);

    FILE *fp = fopen(name, "r");

    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            lower++;
        }
        else if (isupper(ch))
        {
            upper++;
        }
        else if (isdigit(ch))
        {
            digit++;
        }
        else if (!isspace(ch))
        {
            special++;
        }
    }

    fclose(fp);

    printf("Lowercase = %d\n", lower);
    printf("Uppercase = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special = %d\n", special);

    return 0;
}
