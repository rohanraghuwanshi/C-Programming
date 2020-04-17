// Program to show application of goto jump statement
#include <stdio.h>

void main()
{
    printf("\nStatement 1.");
    printf("\nStatement 2.");
    printf("\nStatement 3.");

    goto last;

    printf("\nStatement 4.");
    printf("\nStatement 5.");

    last:
        printf("\nEnd of Program.");
}