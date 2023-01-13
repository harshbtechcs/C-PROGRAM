#include <stdio.h>

int main() {
    int a, b, x, y, t;
    int HCF,LCM;

    printf("Enter your any two integers\n");
    scanf("%d%d", &x, &y);

    a = x; 
    b = y;

    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }

    HCF = a;
    LCM= (x*y)/HCF;

    printf("HCF of %d and %d is: %d\n", x, y, HCF);
    printf("LCM of %d and %d is: %d\n", x, y, LCM);

    return 0;
}
