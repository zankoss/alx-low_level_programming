#include <stdio.h>
#include <string.h>

int main(void)

{
    char str[30];
    unsigned int len;
    
    printf("Enter Ur string:");
    gets(str);
    
    len = strlen(str);
    printf("Length of '%s' is : '%d'\n", str, len);
    
    return 0;
}
