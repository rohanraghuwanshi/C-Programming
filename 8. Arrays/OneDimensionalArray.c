#include <stdio.h>

int main(){

    int arr[5];

    for (int i = 0; i < 5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting elements of the array: \n\n");

    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}