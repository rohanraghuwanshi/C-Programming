#include <stdio.h>

int main(){

    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }

    printf("\nSum of elements = %d ", s);

    return 0;
}