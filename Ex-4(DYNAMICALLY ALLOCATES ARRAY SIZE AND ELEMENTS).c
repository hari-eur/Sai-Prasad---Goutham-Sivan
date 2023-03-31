//DYNAMICALLY ALLOCATES ARRAY SIZE AND ELEMENTS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("The sum of all the values in the array is %d\n", sum);
    free(arr);
    return 0;
}