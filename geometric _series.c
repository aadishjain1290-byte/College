#include <stdio.h>

int main()
{
    int n,r,a;
    int sum = 0;
    printf("Enter the total no. of terms: ");
    scanf("%d", &n);
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common ratio: ");
    scanf("%d", &r);
    int product = a;
    for (int i = 1; i <=n; i++)
    {
        sum = sum + product;    
        product = product *r;
    }
    printf("%d", sum);
    printf("\nAadish Jain \n61");
    return 0;
}