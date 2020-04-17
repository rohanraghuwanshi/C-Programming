// Program to print number upto a given number
#include <stdio.h>

void main()
{
    int a = 1, num;

    printf("Enter any number : ");
    scanf("%d", &num);

    while (a <= num)
    {
        printf("%d", a);
        a++;
    }
}