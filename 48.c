#include <stdio.h>

void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    addNumbers(&a, &b, &result);
    printf("The sum of the numbers is: %d\n", result);

    return 0;
}
 