#include <stdio.h>

int main() {
    int days, years, weeks, day;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;

    day = (days % 365) % 7;

    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", days, years, weeks, day);

    return 0;
}



