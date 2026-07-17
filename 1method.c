#include<stdio.h>

int main() {
   
   int a , b ;

   

    printf("Enter First Integer: ");
    scanf("%d", &a);
    printf("Enter Second Integer: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: %d %d\n", a, b);
 return 0;
}