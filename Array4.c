#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j, k;
    i = j = k = 0;

    // Merge until both arrays have elements
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1
    while (i < size1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while (j < size2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, result);

    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

