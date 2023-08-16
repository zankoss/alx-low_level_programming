#include "main.h"
/**
 *  _memset - 
 * @b: character to check.
 * @n: 
 * Return - return s
*/
char *_memset(char *s, char b, unsigned int n)
{
    
    for (unsigned int i = 0; i < n; i++) 
    {
        s[i] = b;
    }
    return (s);
}
