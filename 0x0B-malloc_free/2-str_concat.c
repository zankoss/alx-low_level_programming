#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}
	
	{
	int i, j;
	char *s3 = (char *)malloc(len1 + len2 + 1);
	
	if (s3 == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	
	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}
	
	s3[i + j] = '\0';
	
	return (s3);
	}
}

