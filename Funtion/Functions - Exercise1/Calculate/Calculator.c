/* Write a program to calculate: 
1.print the following string: "*****<Your Name>*****" \n "*****Initiating The Cipher Calculator*****"
2.Sum of two integers 
3.Subtraction of two integer values  
4.Product of two integers (return the floating value)
5.Division of two integers (return the double datatype value) 
6.Square of any numbers.
7.Cube of any number
8.Area of Circle
9.Area of Rectangle
10.Area of triangle 
11.Cicumference of  Circle
12.Parameter of Rectangle
13.Parameter of Triangle

(Use separate function (13 functions) for all the operations)
(take all the parameters as user input)

*/ 

#include <stdio.h>

void printName() {
    printf("*****Ashish Shinde*****\n");
    printf("*****Initiating The Cipher Calculator*****\n\n");
}

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float product(int a, int b) {
    return (float)a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 0.0;
    }
    return (double)a / b;
}

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

float areaOfCircle(float r) {
    float pi = 3.14159;
    return pi * r * r;
}

float areaOfRectangle(float l, float w) {
    return l * w;
}

float areaOfTriangle(float b, float h) {
    return 0.5f * b * h;
}

float circumferenceOfCircle(float r) {
    float pi = 3.14159;
    return 2 * pi * r;
}

float perimeterOfRectangle(float l, float w) {
    return 2 * (l + w);
}

float perimeterOfTriangle(float a, float b, float c) {
    return a + b + c;
}

int main() {
    int a, b, num;
    float r, l, w, base, height, side1, side2, side3;

    printName();

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", sum(a, b));
    printf("Subtraction = %d\n", subtract(a, b));
    printf("Product = %.2f\n", product(a, b));
    printf("Division = %.2lf\n\n", divide(a, b));

    printf("Enter a number to find square and cube: ");
    scanf("%d", &num);
    printf("Square = %d\n", square(num));
    printf("Cube = %d\n\n", cube(num));

    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of Circle = %.2f\n", areaOfCircle(r));
    printf("Circumference of Circle = %.2f\n\n", circumferenceOfCircle(r));

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &l, &w);
    printf("Area of Rectangle = %.2f\n", areaOfRectangle(l, w));
    printf("Perimeter of Rectangle = %.2f\n\n", perimeterOfRectangle(l, w));

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f\n", areaOfTriangle(base, height));

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    printf("Perimeter of Triangle = %.2f\n", perimeterOfTriangle(side1, side2, side3));

    return 0;
}
