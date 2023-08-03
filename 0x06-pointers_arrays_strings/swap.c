#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 * 
 */
void main(void)
{
	int str[] = {1, 2, 3, 4, 5};
	int i = 0, j = len, tmp;
	len = strlen(str);

	while ( i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	printf("swaped str: %d\n",*str);
}
