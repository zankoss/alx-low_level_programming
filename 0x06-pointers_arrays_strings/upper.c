#include <stdio.h>

int main() 
{
    int i = 0;
    char str[] = "a, R, P, x, c, 5, j, *, +";
    while(str[i] != '\0')
    {
	if (str[i] >= 'a' && str[i] <= 'z')
        {
        str[i] = str[i] - 32;
        }
        i++;
    }
    printf("%s\n", str);

    return 0;
}
