#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void main(void)
{
	char str[30];
	int len;

	printf("entre String: ");
	gets(str);

	len = stringlength(str);
	printf("Length: %d\n", len);
}
int stringlength(char x[])
{
	int i = 0, count = 0;

	while (x[i] != '\0')
	{
		count++;
		i++;
	}
	return(count);
}
