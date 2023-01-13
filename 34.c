#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n-1];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);
    for (i = pos-1; i < n-1; i++) {
        a[i] = a[i+1];
    }
    printf("New array after deleting the element: ");
    for (i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
