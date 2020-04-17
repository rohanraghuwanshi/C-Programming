#include <stdio.h>
#include <string.h>

int main()
{

    char str1[12] = "Hello";
    char str2[12] = "World";

    strcat(str1, str2);
    printf("strcat( str1, str2):   %s\n", str1);

    return 0;
}