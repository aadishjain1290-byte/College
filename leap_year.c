#include <stdio.h>

int main()
{
    int day,month,year;
    printf("Please enter the year: ");
    scanf("%d %d %d", &day, &month, &year);
    if (year%4 == 0 && year%100 !=0)
    {
        printf("%d is a leap year", year);
    }
    else if (year%400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    printf("\nAadish Jain \n61");
    return 0;
}
