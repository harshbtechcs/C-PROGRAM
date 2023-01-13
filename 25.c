#include <stdio.h>

int main() {
    int a, i, first = 0, second = 1, next;

    printf("Enter your number of terms: ");
    scanf("%d", &a);

    printf("Fibonacci Series ");

    for (i = 0; i < a; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}