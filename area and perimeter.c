#include<stdio.h>
#include<math.h>
int main()
{    int choice;
    double a, b, c;
    const double pi = 3.14159;
    double area, perimeter, s;
    do
    {
        printf("Choose a shape to calculate area and perimeter:\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%lf", &a);
                if (a <=0) {
                    printf("Radius cannot be negative. Please try again.\n");
                    break;
                }
                b = pi * a * a;
                c = 2 * pi * a;
                printf("Area of the circle: %.3lf \n", b);
                printf("Perimeter of the circle: %.3lf \n", c);

                break;
            case 2:
                printf("Enter the length and width of the rectangle: ");
                scanf("%lf %lf", &a, &b);
                if (a <= 0 || b <= 0) {
                    printf("Length and width cannot be negative. Please try again.\n");
                    break;
                }
                 area= a * b;
                 perimeter= 2 * (a + b);
                printf("Area of the rectangle: %.3lf\n", area);
                printf("Perimeter of the rectangle: %.3lf\n", perimeter);
                break;
            case 3:
                printf("Enter the three sides of the triangle: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                if (a <= 0 || b <= 0 || c <= 0) {
                    printf("Sides cannot be negative. Please try again.\n");
                    break;
                } 
                if ((a + b <= c) || (a + c < b) || (b + c < a)) {
                    printf("The given sides do not form a valid triangle. Please try again.\n");
                    break;
                }
                perimeter = a + b + c;
                s = perimeter / 2;
                area = sqrt(s * (s - a) * (s - b) * (s - c));
                printf("Area of the triangle: %.3lf\n", area);
                printf("Perimeter of the triangle: %.3lf\n", perimeter);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);
 return 0;
}