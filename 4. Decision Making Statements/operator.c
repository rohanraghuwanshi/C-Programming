// Program to show the use of conditional operator
#include <stdio.h>

int main()
{
    int age;

    printf(" Please Enter your age here: \n ");
    scanf(" %d ", &age);

    (age >= 18) ? printf(" You are eligible to Vote ") : printf(" You are not eligible to Vote ");

    return 0;
}