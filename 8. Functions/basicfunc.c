// Program to create and call a simple function
#include<stdio.h>

int Add(int, int);

int main()
{
    int x, y;

    printf("Enter any number : ");
    scanf("%d", &x);

    printf("Enter another number : ");
    scanf("%d", &y);

    printf("The sum is : %d", Add(x, y));

    return 0;
}

int Add(int x, int y)
{
    int sum;

    sum = x + y;

    return sum;
}
