#include <stdio.h>
#include <string.h>

int main()
{
    char strg1[50], strg2[50];

    printf("Enter first string: ");
    gets(strg1);

    printf("Enter second string: ");
    gets(strg2);

    if (strcmp(strg1, strg2) == 0)
    {
        printf("\nBoth the strings are same");
    }

    else
    {
        printf("\nEntered strings are not same!");
    }

    return 0;
}