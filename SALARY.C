#include <stdio.h>
#include <conio.h>
int main()
{
    int base,HRA,DA,Gross,bracket;
    printf("Enter the base salary: ");
    scanf("%d", &base);
    if (base <=10000)
	bracket = 1;
    else if (base <=20000)
	bracket = 2;
    else if (base >20000)
	bracket = 3;
    else
	printf("Please enter a valid salary");
    switch(bracket)
    {
	case 1:
	    HRA = base * 0.2;
	    DA = base * 0.8;
	    break;
	case 2:
	    HRA = base * 0.25;
	    DA = base * 0.9;
	    break;
	case 3:
	    HRA = base * 0.3;
	    DA = base * 0.95;
	    break;
    }
    Gross = base + HRA + DA;
    printf("The HRA is %d \n", HRA);
    printf("The DA is %d \n", DA);
    printf("The gross salary is %d \n", Gross);
    printf("Aadish Jain \n61 \n");
    getch();
    return 0;
}
