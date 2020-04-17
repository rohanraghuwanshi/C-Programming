#include <stdio.h>
#include <string.h>

int main()
{
    const char str[20] = "Hello, how are you?";
    const char searchString[10] = "you";

    char *result;

    result = strstr(str, searchString);

    printf("The substring starting from the given string: %s", result);

    return 0;
}