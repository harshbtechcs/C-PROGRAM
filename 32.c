#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("Elements of the second array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
