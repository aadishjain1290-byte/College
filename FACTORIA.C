# include <stdio.h>

int main()
{
	int number;
	int i;
	int factorial = 1;

	printf("Enter the number: ");
	scanf("%d", &number);

	for(i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}

	printf("Factorial of %d is: %d \n", number, factorial);

	return 0;
}

