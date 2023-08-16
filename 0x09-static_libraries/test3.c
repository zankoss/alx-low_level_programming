#include <stdio.h>


char *_strcat(char *dest, char *src);

int main(char)
{
	char a[20] = "kamal.";
	char b[] = "azenag";

	_strcat(a, b);
	printf("%s\n", a);
		
	return (0);
}
