#include<stdio.h>

int main() {
   double a , b  ;
    

    printf("Enter a: ");
    scanf("%lf", &a); 
    printf("Enter b: ");
    scanf("%lf", &b);
    a= a - b;
    b= a + b;
    a= b - a;

 printf ("After swapping a: %.3lf\n", a); 
printf ("After swapping b: %.3lf\n", b);

    return 0;
}