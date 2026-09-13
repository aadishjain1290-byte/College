#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,choice;
    printf("Press 1 for addition \n");
    printf("Press 2 for subtraction \n");
    printf("Press 3 for multiplication \n");
    printf("Press 4 for division \n");
    printf("Enter the operation you would like to perform \n");
    scanf("%d", &choice);
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    switch(choice)
    {
	case 1:
	    printf("Sum is: %d", a+b);
	    break;
	case 2:
	    printf("Differnece is: %d", a-b);
	    break;
	case 3:
	    printf("Multiplication is: %d", a*b);
	    break;
	case 4:
	    printf("Division is: %d",a/b);
	    break;
	default:
	    printf("Please enter a valid operation");
    }
    printf("\nAadish Jain \n61");
    getch();
    clrscr();
    return 0;
}