// Program to show application of break jump statement
#include <stdio.h>

void main()
{
    int a = 1;

    while (a <= 10)
    {
        if (a == 5){
            break;
        }

        printf("\nStatement %d.", a);
        a++;
    }
    printf("\nEnd of Program.");
}