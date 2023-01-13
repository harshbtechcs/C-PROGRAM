#include <stdio.h>

int main() {
    int i;

    printf("ASCII values of all characters:\n");
    for (i = 0; i <= 255; i++) {
        printf("%c: %d\n", i, i);
    }

    return 0;
}
