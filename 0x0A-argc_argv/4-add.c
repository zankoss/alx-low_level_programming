#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int i = 1, sum = 0;

    if (argc == 1)
    {
        /** No arguments provided */
        printf("0\n");
        return 0;
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            int j = 0;
            while (argv[i][j])
            {
                if (!isdigit(argv[i][j]))
                {
                    printf("Error\n");
                    return 1;
                }
                j++;
            }
            sum += atoi(argv[i]);
        }
    }

    printf("%d\n", sum);

    return 0;
}

