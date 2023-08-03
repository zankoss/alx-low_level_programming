#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    char str1[100];
    printf("Entre first string:");
    scanf("%s", str1);
    char str2[100];
    printf("Entre second string:");
    scanf("%s", str2);
    
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    
    for (i = 0; i <= l2; i++)
    {
        str1[l1+i] = str2[i];
    }

    printf("%s\n", str1);
    
    return 0;
}
