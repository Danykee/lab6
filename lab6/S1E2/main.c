#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    char string[100];
    printf("Enter string :");
    gets(string);
    len = strlen(string);
    printf("the string %s has %d characters in it", string, len);
}
