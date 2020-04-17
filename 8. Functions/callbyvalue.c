// Program to display call by value method
#include <stdio.h>

void main()
{
    int A = 10, B = 20;

    printf("\nValues before calling %d, %d", A, B);

    fun(A, B); //Statement     1

    printf("\nValues after  calling %d, %d", A, B);
}

void fun(int X, int Y) //Statement     2
{
    X = 11;
    Y = 22;
}
