#include<stdio.h>

int main(void)
{
    
    int side = 7;
    int square_area = side * side;
    int square_perimeter = 4 * side;

   
    int length = 7, width = 3;
    int rectangle_area = length * width;
    int rectangle_perimeter = 2 * (length + width);

   
    int s1 = 20, s2 = 20, base = 32, height = 12;
    float triangle_area = base * height / 2;
    int triangle_perimeter = s1 + s2 + base;

    
    float diameter = 8;
    float radius = diameter / 2;
    float circle_area = 3.14 * radius * radius;
    float circle_circumference = 2 * 3.14 * radius;

    
    printf("1) Square (side = %d ):\n", side);
    printf("   Area = %d, Perimeter = %d \n\n", square_area, square_perimeter);

    printf("2) Rectangle (length = %d , width = %d ):\n", length, width);
    printf("   Area = %d, Perimeter = %d \n\n", rectangle_area, rectangle_perimeter);

    printf("3) Triangle (s1 = %d , s2 = %d , base = %d , height = %d ):\n", s1, s2, base, height);
    printf("   Area = %.2f, Perimeter = %d \n\n", triangle_area, triangle_perimeter);

    printf("4) Circle (diameter = %.1f ):\n", diameter);
    printf("   Area = %.2f, Circumference = %.2f \n", circle_area, circle_circumference);

    return 0;
}
