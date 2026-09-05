#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Please enter a valid value for a");
    }
    else
    {
        d = b*b - 4*a*c; 
        if (d>0)
        {   
            float r1= (-b + sqrt(d))/(2*a);
            float r2= (-b - sqrt(d))/(2*a);
            printf("Roots of the equation are %f and %f", r1, r2);
        }
    
        else if (d==0)
        {
            printf("Roots of the equation are %f and %f", -b/(2*a), -b/(2*a));
        }
        else 
        {
            printf("The roots are imaginary");
        }
    }
    printf("\nAadish Jain \n61");
    return 0;
}