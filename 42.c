#include <stdio.h>

void merge(int a[], int b[], int c[], int m, int n) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < m) {
        c[k++] = a[i++];
    }

    while (j < n) {
        c[k++] = b[j++];
    }
}

int main() {
    int a[100], b[100], m, n, c[200];
    int i;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);
    printf("Enter the elements of the first array: \n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);
    printf("Enter the elements of the second array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    merge(a, b, c, m, n);

    printf("The merged and sorted array is: \n");
    for (i = 0; i < m + n; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}