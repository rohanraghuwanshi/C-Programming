// Program to show if else usage
#include <stdio.h>

int main(){

    int a;

    printf("n Enter a number:");
    scanf("%d", &a);

    if (a > 0){
        printf("n The number %d is positive.", a);
    } 
    else {
        printf("n The number %d is negative.", a);
    }

    return 0;
}