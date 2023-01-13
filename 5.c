#include <stdio.h>
#include <math.h>

int main() {
    int base, exponent, result,answer,num;
int a;
printf("press 1 to get power\n");
printf("press 2 to get square root");

scanf("%d",&num);
if(num==1){
    printf("Enter a base: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent);
    printf("%d to the power of %d is %d\n", base, exponent, result);
    }

if(num==2){
    printf("enter any number for square root");
    scanf("%d",&a);
answer=sqrt(a);
    
printf("%d",answer);}
    return 0;
}


