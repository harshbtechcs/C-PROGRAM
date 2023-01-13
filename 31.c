#include <stdio.h>

int main() {
    int n, i, a[100], sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of all elements of the array: %d\n", sum);
    return 0;
}
