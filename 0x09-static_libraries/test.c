#include <stdio.h>
/**
 * main - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(char c);


int main(char c)
{
	printf("Enter your caracter :\n");
	scanf("%c", &c);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		if (_isupper(c))
		{
			printf("%c is Uppercase letter.\n", c);
		}
		else
		{
			printf("%c is an Lowercase letter.\n", c);
		}
	else
		printf("%c Input Error.\n", c);

	return (0);
}
