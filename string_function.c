
#include <stdio.h>

int length(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}

void concat(char a[], char b[])
{
    int i = length(a);
    int j = 0;

    while (b[j] != '\0')
    {
        a[i++] = b[j++];
    }

    a[i] = '\0';
}

void copyStr(char src[], char dst[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';
}

void reverse(char s[], char r[])
{
    int n = length(s);

    for (int i = 0; i < n; i++)
    {
        r[i] = s[n - 1 - i];
    }

    r[n] = '\0';
}

int main()
{
    char s1[200], s2[100], cp[200], rev[200];

    printf("Enter first string: ");
    scanf(" %199[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %99[^\n]", s2);

    printf("Length of first string = %d\n", length(s1));

    copyStr(s1, cp);
    printf("Copy of first string = %s\n", cp);

    reverse(s1, rev);
    printf("Reverse of first string = %s\n", rev);

    concat(s1, s2);
    printf("After concatenation = %s\n", s1);

    return 0;
}
