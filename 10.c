#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? printf("Alphabet") : (ch >= '0' && ch <= '9') ? printf("Digit") : printf("Special character");
    return 0;
}
