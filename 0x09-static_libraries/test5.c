#include <stdio.h>
/**
 * main - 
 *
 *
 *
 */
int _isdigit(int c);

int main(char c)
{
	printf("Enter your caracter:");
	scanf("%c", &c);

	if (_isdigit(c) == 1)
		printf("Your input '%c' is a Digit\n", c);
	else
		printf("Your input '%c' is not a Digit\n", c);
	return (0);
}
