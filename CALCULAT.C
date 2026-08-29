# include <stdio.h>

int main()
{
	int num1;
	int num2;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);

	printf("Addition of %d and %d is: %d \n", num1, num2, num1+num2);
	printf("Subtraction of %d and %d is: %d \n", num1, num2, num1-num2);
	printf("Multiplication of %d and %d is: %d \n", num1, num2, num1*num2);
	printf("Division of %f and %d is: %f \n", (float)num1, num2, (float)num1/num2);

	return 0;
}
