#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int n,c;
    printf("Please enter the number: ");
    scanf("%d", &n);
    printf("%d \t", a);
    printf("%d \t", b);
    for (int i = 3; i <=n; i++)
    {
        c = a+b;
        a = b;
        b = c;  
        printf("%d \t", c);
    }
    return 0;
    printf("\nAadish Jain \n61");
}