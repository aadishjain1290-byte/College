#include <stdio.h>

int main()
{
    char str[100], *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while (*p != '\0' && *p != '\n')
    {
        p++;
    }

    printf("Length = %ld\n", (long)(p - str));

    return 0;
}