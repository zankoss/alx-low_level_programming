#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, result;
	
	if (argc > 2)
	{
		for (i = 1; i < argc - 1; i++)
		{
			int num1 = atoi(argv[i]);
			int num2 = atoi(argv[i + 1]);
			result = num1 * num2;
			printf("%d\n", result);
		}
	}
	else
		printf("Error\n");

        return (0);
}
