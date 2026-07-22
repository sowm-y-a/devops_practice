#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;
    // Outer loop for passes
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for element comparison
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {42, 15, 8, 99, 23, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
