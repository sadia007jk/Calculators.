#include<stdio.h>

int main() {
    int choice;
    char unit;
    double fahrenheit, celsius, kelvin;
    printf("Conversion between temperature units: \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Fahrenheit\n");
    printf("6. Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
     
    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("%.3lf Celsius = %.3lf Fahrenheit\n", celsius, fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &celsius);
            kelvin = celsius + 273.15;
            printf("%.3lf Celsius = %.3lf Kelvin\n", celsius, kelvin);
            break;
        case 3:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &fahrenheit);
            celsius = (fahrenheit - 32) * 5/9;
            printf("%.3lf Fahrenheit = %.3lf Celsius\n", fahrenheit, celsius);
            break;
        case 4:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &fahrenheit);
            kelvin = (fahrenheit - 32) * 5/9 + 273.15;
            printf("%.3lf Fahrenheit = %.3lf Kelvin\n", fahrenheit, kelvin);
            break;
        case 5:
            printf("Enter temperature in Kelvin: ");
            scanf("%lf", &kelvin);
            fahrenheit = (kelvin - 273.15) * 9/5 + 32;
            printf("%.3lf Kelvin = %.3lf Fahrenheit\n", kelvin, fahrenheit);
            break;
        case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%lf", &kelvin);
            celsius = kelvin - 273.15;
            printf("%.3lf Kelvin = %.3lf Celsius\n", kelvin, celsius);
            break;
        case 0:
            printf("Exiting the program.\n");
            break;
    
        default:
            printf("Invalid choice!\n");
    } 
        return 0;
}
  
