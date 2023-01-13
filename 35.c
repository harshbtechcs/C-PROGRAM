#include <stdio.h>

int main() {
    int n, i, ele, flag = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++) {
        if (a[i] == ele) {
            printf("Element found at position %d\n", i+1);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Element not found\n");
    }
    return 0;
}
