#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if ( a& 1) {
        printf("Least Significant Bit (LSB) is set (1)\n");
    } else {
        printf("Least Significant Bit (LSB) is not set (0)\n");
    }

    if (a & (1 << (sizeof(int) * 8 - 1))) {
        printf("Most Significant Bit (MSB) is set (1)\n");
    } else {
        printf("Most Significant Bit (MSB) is not set (0)\n");
    }

    return 0;
}