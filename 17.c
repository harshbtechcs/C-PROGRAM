#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of all natural numbers from 1 to %d is: %d", n, sum);
    return 0;
}
