#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for(i = 1; i <= 10; ++i) {
        for(j = 1; j <= 10; ++j) {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
