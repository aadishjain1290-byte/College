#include <stdio.h>
#include <conio.h>
int main()
{
    int n,digit,temp;
    int divisor = 1;
    printf("Enter a nuber: ");
    scanf("%d", &n);

    if(n<0)
    {
	printf("Enter a valid value");
	return 0;
    }
    if(n==0)
    {
	printf("Zero\n");
	return 0;
    }
    temp = n;
    while (temp>= 10)
    {
	temp /= 10;
	divisor*=10;
    }
    while (divisor > 0)
    {
	digit = n/divisor;
	n = n%divisor;
	divisor /=10;

	switch(digit)
	{
	    case 0:
	    {
		printf("Zero ");
		break;
	    }
	    case 1:
	    {
		printf("One ");
		break;
	    }
	    case 2:
	    {
		printf("Two ");
		break;
	    }
	    case 3:
	    {
		printf("Three ");
		break;
	    }
	    case 4:
	    {
		printf("Four ");
		break;
	    }
	    case 5:
	    {
		printf("Five ");
		break;
	    }
	    case 6:
	    {
		printf("Six ");
		break;
	    }
	    case 7:
	    {
		printf("Seven ");
		break;
	    }
	    case 8:
	    {
		printf("Eight ");
		break;
	    }
	    case 9:
	    {
		printf("Nine ");
		break;
	    }
	}
    }
     printf("\nAadish Jain \n61");
     getch();
     clrscr();
     return 0;

}
