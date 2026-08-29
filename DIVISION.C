# include <stdio.h>

int main()
{
	int num1;
	int num2;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("%.0f divided by %d is: %.2f\n", (float)num1, num2, (float)num1/num2);

	return 0;
}
