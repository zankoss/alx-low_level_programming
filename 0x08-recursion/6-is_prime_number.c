#include "main.h"

int help_is_prime_number(int i, int n);

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1 || n < 0)
		return (0);
	else if (n % i == 0)
		return (0);
	else
		return (help_is_prime_number(i + 1, n));
}

int help_is_prime_number(int i, int n)
{
	if (i >= n)
		return (1);
	else if (n % i == 0)
		return 0;
	else
		return (help_is_prime_number(i + 1, n));
}
