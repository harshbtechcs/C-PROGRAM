#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue(): a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference(): a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping (using call by value): a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After swapping (using call by value): a = %d, b = %d\n", a, b);

    printf("Before swapping (using call by reference): a = %d, b = %d\n", a, b);
    swapByReference(&a, &b);
    printf("After swapping (using call by reference): a = %d, b = %d\n", a, b);

    return 0;
}
