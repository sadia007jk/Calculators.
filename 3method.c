#include<stdio.h>

int main() {
   int a , b  ;
    

    printf("Enter First integer: ");
    scanf("%d", &a); 
    printf("Enter Second integer: ");
    scanf("%d", &b);
    a= a^b;
    b= a^b;
    a= a^b;

 printf ("After swapping a: %d\n", a); 
printf ("After swapping b: %d\n", b);

    return 0;
}