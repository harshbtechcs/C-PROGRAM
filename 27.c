#include <stdio.h>

int main() {
    int n, i, j, sum;
    int ch;

printf("press 1 for to print all perfect numbers between 1 to n\n");
printf("press 2 to check perfect numbers");
scanf("%d",&ch);

if(ch==1){
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 to %d are: ", n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    }
else if(ch==2){




    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("%d is a perfect number.", n);
    } else {
        printf("%d is not a perfect number.", n);
    }

    return 0;
}





}