// Program to display call by refrence method
#include <stdio.h>

void main()
{
    int A = 10, B = 20;

    printf("\nValues before calling %d, %d", A, B);

    fun(&A, &B);

    printf("\nValues after  calling %d, %d", A, B);
}

void fun(int *X, int *Y)
{
    *X = 11;
    *Y = 22;
}
