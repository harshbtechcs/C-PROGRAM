#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool isArmstrong(int num) {
    int sum = 0, originalNum = num;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum == originalNum;
}

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) printf("%d is a prime number\n", num);
    else printf("%d is not a prime number\n", num);

    if (isArmstrong(num)) printf("%d is an armstrong number\n", num);
    else printf("%d is not an armstrong number\n", num);

    if (isPerfect(num)) printf("%d is a perfect number\n", num);
    else printf("%d is not a perfect number\n", num);

    return 0;
}
