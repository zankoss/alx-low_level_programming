#include "main.h"
/**
 * _isdigit - check if caeacter is digit.
 * @c: the caracter to chek.
 * Return 1 (true) if 'c' is a digit
 * Return 0 (false) if 'c' is not a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return(0);
}
