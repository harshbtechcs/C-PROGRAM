#include <stdio.h>

int main() {
    int i, total = 0;
    float grade, average, percentage;

    printf("Enter the grades for five subjects: ");
    for (i = 1; i <= 5; i++) {
        scanf("%f", &grade);
        total += grade;
    }

    average = (float)total / 5;
    percentage = (float)total / 500 * 100;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}