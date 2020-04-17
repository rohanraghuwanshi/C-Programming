#include <stdio.h>
#include <string.h>

int main()
{

    char str1[10] = "Hello";
    char str2[10];
    int len;

    strcpy(str2, str1);
    printf("strcpy( str2, str1) :  %s\n", str2);

    return 0;
}