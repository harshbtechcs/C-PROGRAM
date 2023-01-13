#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
short int ch;
printf("PRESS 1 FOR CALCULATOR\n");
printf("PRESS 2 FOR DAYS OF WEEK");
scanf("%d",&ch);


if(ch==1){

printf("for calculator press 1");
printf("for days press 2");
scanf("%d",ch);

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            break;
        
        default:
            printf("Error! operator is not correct");
            }
}
else if(ch==2){
    int day;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid number");}
    }
   

    
    return 0;

}
