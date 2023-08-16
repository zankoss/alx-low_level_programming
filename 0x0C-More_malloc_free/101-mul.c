#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_number(const char *str) {
    int i;
    for (i = 1; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char **argv) {
    long num1, num2, result;

    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    if (is_positive_number(argv[1]) || is_positive_number(argv[2])) {
        printf("Error\n");
        exit(98);
    }

    num1 = atol(argv[1]);
    num2 = atol(argv[2]);
    result = num1 * num2;

    printf("%ld\n", result);

    return 0;
}

