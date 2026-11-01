#include <stdio.h>

int is_leap_year(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int days_in_months(int month, int year)
{
     int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        return 29;

    return days[month];
}

long totalDays(int day, int month, int year)
{
    long total = 0;
    int i;

    for (i = 1; i < year; i++)
    {
        if (isLeapYear(i))
            total += 366;
        else
            total += 365;
    }

    for (i = 1; i < month; i++)
        total += daysInMonth(i, year);

    total += day;

    return total;
}



int main()
{
int d1,d2, m1,m2, y1,y2;
long days, weeks, remainingDays;
long date1, date2;

printf("Please enter the first date: ");
scanf("%d %d %d", &d1, &m1, &y1);
printf("Please enter the second date: ");
scanf("%d %d %d", &d2, &m2, &y2);

 if (m1 < 1 || m1 > 12 || m2 < 1 || m2 > 12 ||
        y1 < 1 || y2 < 1 ||
        d1 < 1 || d1 > daysInMonth(m1, y1) ||
        d2 < 1 || d2 > daysInMonth(m2, y2))
    {
        printf("Invalid date entered.\n");
        return 1;
    }

    date1 = totalDays(d1, m1, y1);
    date2 = totalDays(d2, m2, y2);

    days = date1 - date2;

    if (days < 0)
        days = -days;

    weeks = days / 7;
    remainingDays = days % 7;

    printf("\nTotal days between dates = %ld\n", days);
    printf("Total weeks = %ld weeks and %ld days\n", weeks, remainingDays);

    return 0;
}