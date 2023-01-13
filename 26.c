#include <stdio.h>
#include <math.h>

int main() {
    int n, i, num, rem, sum, digits,ch;
printf("press 1 to print armstrong number from 1 to n\n");
printf("press 2 to check armstrong");
scanf("%d",&ch);

if(ch==1){
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are: \n", n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        num = i;
        digits = (int) log10(num) + 1;

        while (num > 0) {
            rem = num % 10;
            sum = sum + pow(rem, digits);
            num = num / 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }
}
   else if(ch==2){


    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;
    digits = (int) log10(num) + 1;

    int temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;




   }
    }