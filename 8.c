#include<stdio.h>
int main(){

    int a,b,c,d;

    printf("for swapping without using third variable press 1\n");
    printf("for swapping by using third variable press 2");

scanf("%d",&c);
if(c==1){
printf("enter your number");
    scanf("%d %d",&a ,&b);
a=a+b;
b=a-b;
a=a-b;

printf("values are swapped a is %d, b is %d",a,b);



}
else if(c==2){
printf("enter your number");
    scanf("%d %d",&a ,&b);
d=b;
b=a;
a=d;

printf("values are swapped a is %d, b is %d",a,b);



}  

else{


    printf("wrong input taken");
}








    
}