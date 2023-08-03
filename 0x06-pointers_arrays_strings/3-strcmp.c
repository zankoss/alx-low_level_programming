#include "main.h"
#include <stdio.h>
/**
 * strcmp - Compare two strings lexicographically.
 * @str1: Pointer to the first string.
 * @str2: Pointer to the second string.
 *
 * Return:
 *  - A negative value if str1 is less than str2.
 *  - 0 if str1 is equal to str2.
 *  - A positive value if str1 is greater than str2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
