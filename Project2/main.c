#include <stdio.h>

void printValues(int *arr);
void sort(int *arr);
void swap(int *a, int *b);


int main() {
    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
    
    printf("Before: \n");
    printValues(values);

    // Test swap
    int x = 3;
    int y = 5;
    printf("x: %d, y: %d \n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d \n", x, y);

    // Sort the array
    sort(values);
    
    printf("After: \n");
    printValues(values);

    return 0;
}

void printValues(int *arr) {
    printf("[");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr) {
    int MAX = 9;
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                printValues(arr);
            }
        }
    }
}

