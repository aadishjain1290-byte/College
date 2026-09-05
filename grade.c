#include <stdio.h>

int main()
{
    int grade;
    printf("Please enters the student grade: ");
    scanf("%d", &grade);
    if (80<=grade && grade<90)
    {
        printf("excellent, grade a");
    }
    else if (60<=grade)
    {
        printf("grade b");
    }
    else if (40<=grade)
    {
        printf("grade c");
    }
    else if (grade<40)
    {
        printf("Fail");
    }
    printf("\nAadish Jain \n61");
    return 0;
}