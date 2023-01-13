#include <stdio.h>

int main() {
    int a, b, j, Prime;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Prime numbers between 1 and %d are: \n", a);

    for (b = 2; b <= a; b++) {
        Prime = 1;
        for (j = 2; j <= b / 2; j++) {
            if (b % j == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime == 1)
            printf("%d ", b);
    }
    return 0;
}
