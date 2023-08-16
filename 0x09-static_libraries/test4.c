#include <stdio.h>
#include <string.h>




char *_strncat(char *dest, char *src, int n);

int main(char)
{
        char a[20] = "kamal.";
        char b[] = "azenag";
	int n = 3;

        _strncat(a, b, n);
        printf("%s\n", a);

        return (0);
}
