#include <stdio.h>

int main() {
    int n, i, pos, ele;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to insert an element: ");
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &ele);
    for (i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }
    a[pos-1] = ele;
    printf("New array after inserting an element: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
