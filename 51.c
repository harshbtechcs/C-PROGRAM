#include <stdio.h>

int main() {
    int i, j;
    int a;
    printf("enter the rows");
    scanf("%d",&a);
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
