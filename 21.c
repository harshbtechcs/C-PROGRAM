#include <stdio.h>

int main() {
    int n, digit, a[10] = {0};

    printf("Enter your number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        a[digit]++;
        n /= 10;
    }

    printf("Digit:\tFrequency\n");
    for (int i = 0; i < 10; i++) {
        if (a[i] > 0) {
            printf("%d\t%d\n", i, a[i]);
        }

        
    }

    return 0;
}

