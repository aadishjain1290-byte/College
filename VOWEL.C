#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    switch(ch)
    {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	    printf("It is a vowel \n");
	    break;
	default:
	    printf("It is not a vowel \n");
    }
    printf("Aadish Jain \n61");
    getch();
    clrscr();
    return 0;
}