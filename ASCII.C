# include <stdio.h>

int main()
{
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	printf("The ACSII value of the character %c is: %d \n", ch, ch);

	return 0;
}
