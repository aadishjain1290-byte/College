#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number/100 == number%10)
    {
        printf("%d is a pallindrome",number);
    }
    else
    {
        printf("%d is not a pallindrome",number);
    }
    printf("\nAadish Jain \n61");
    return 0;
}