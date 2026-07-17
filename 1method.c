#include<stdio.h>

int main() {
   
   int a , b ;

    int temp = a;
    a = b;
    b = temp;

    printf("Enter First Integer: ");
    scanf("%d", &a);
    printf("Enter Second Integer: ");
    scanf("%d", &b);
    printf("After swapping: %d %d\n", b, a);
 return 0;
}