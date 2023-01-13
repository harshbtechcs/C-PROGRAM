#include <stdio.h>

int main() {
    int units,charge;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
printf("enter the charge of 1unit in your area");
scanf("%d",&charge);


    if (units <= 50) {
        bill = units *charge;
    } else if (units <= 150) {
        bill = 25 + units* charge;
    } else if (units <= 250) {
        bill = 100 + units * charge;
    } else {
        bill = 220 + units*charge;
    }

    printf("Total electricity bill = %.2f rupees", bill);

    return 0;
}

