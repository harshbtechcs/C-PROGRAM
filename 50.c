#include <stdio.h>

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

void reverseArray(int *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int src[size], dest[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &src[i]);
    }

    copyArray(src, dest, size);
    printf("Elements of the copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    reverseArray(src, size);
    printf("Elements of the reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", src[i]);
    }

    return 0;
}
