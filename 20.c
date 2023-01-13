#include <stdio.h>

int main() {
    int num, temp, digit, reversed = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (num == reversed) {
        printf("%d is a palindrome", num);
    } else {
        printf("%d is not a palindrome", num);
    }
    return 0;
}
