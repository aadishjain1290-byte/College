
#include <stdio.h>

int main()
{
    char s[100];
    int n = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    while (s[n] != '\0')
    {
        n++;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("%s is a palindrome\n", s);
    }
    else
    {
        printf("%s is not a palindrome\n", s);
    }

    return 0;
}
