#include <stdio.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n);

int main(void)
{
	char str[15];

	_memset(str, 'c', sizeof(char) * 5);
	_memset(str + 5, 'd', sizeof(char) * 5);
	_memset(str + 10, 'k', sizeof(char) * 5);

	for (int i = 0; i < 15; i++)
		printf("%c", str[i]);
	printf("\n");
	return (0);
}
