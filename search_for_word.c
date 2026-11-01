
#include <stdio.h>

int main()
{
    char s[200], w[50];
    int i, j, found = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    

    printf("Enter the word to find: ");
    scanf("%s", w);

    for (i = 0; s[i] != '\0'; i++)
    {
        j = 0;

        while (w[j] != '\0' && s[i + j] == w[j])
        {
            j++;
        }

        if (w[j] == '\0' &&
            (i == 0 || s[i - 1] == ' ') &&
            (s[i + j] == ' ' || s[i + j] == '\0'))
        {
            printf("Word found at location %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Word not found\n");
    }

    return 0;
}
