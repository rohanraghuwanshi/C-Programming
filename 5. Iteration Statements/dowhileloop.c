// Program to show the do while loop
#include <stdio.h>

void main()
{
    int a = 1, num;

    printf("Enter any number : ");
    scanf("%d", &num);

    do
    {
        printf("\nHello...!!");
        a++;
    } while (a <= num);
}