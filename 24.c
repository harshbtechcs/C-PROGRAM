#include <stdio.h>

int factorial(int b) {
    int a = 1;
    for (int i = 1; i <= b; i++) {
        a *= i;
    }
    return a;
}

int main() {
    int n, i, j, temp, sum, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are: \n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            rem = temp % 10;
            sum += factorial(rem);
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
