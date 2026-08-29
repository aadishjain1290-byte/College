# include <stdio.h>

int main()
{
	int num1;
	int num2;
	int choice;
	printf("What operation would you like to perform? \n");
	printf("Choose 1 for addition\n");
	printf("Choose 2 for subtraction\n");
	printf("Choose 3 for multiplication\n");
	printf("Choose 4 for division\n");
	scanf("%d", &choice);

	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);

	if (choice == 1){
		printf("Addition of %d and %d is: %d", num1, num2, num1+num2);
	}
	else if (choice == 2){
		printf("Subtraction of %d and %d is: %d", num1, num2, num1-num2);
	}
	else if (choice == 3){
		printf("Multiplication of %d and %d is: %d", num1, num2, num1*num2);
	}
	else if (choice == 4){
		printf("Division of %d and %d is: %d", num1, num2, num1/num2);
	}
	else {
	printf("Choose a valid operation");
	}
	return 0;
}