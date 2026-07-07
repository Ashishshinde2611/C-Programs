/*

	- Create a structure Calculator with following attributes: 
		side1, side2, side3, areaOfTriangle, areaOfSquare.
	- write following functionalities:
		- AllocateMemory(): a function which accepts the structure pointer as a parameter and Allocate  Memory dynamically dor 3 sides. 
		- CalculateAreaOfTriangle(): a function which accepts the structure pointer as a parameter and calculate area of triangle and return the structure pointer 
		- Display(): a function which accepts the structure pointer as a parameter and display value of 3 sides and area of triangle.
	

*/
#include <stdio.h>
#include <stdlib.h>

struct Calculator {
    float *side1;
    float *side2;
    float *side3;
    float areaOfTriangle;
    float areaOfSquare;
};

void AllocateMemory(struct Calculator *c) {
    c->side1 = (float*)malloc(sizeof(float));
    c->side2 = (float*)malloc(sizeof(float));
    c->side3 = (float*)malloc(sizeof(float));
}

struct Calculator* CalculateAreaOfTriangle(struct Calculator *c) {
    float a = *(c->side1);
    float b = *(c->side2);
	float d = *(c->side3);
    c->areaOfTriangle = 0.5f * a * b;
    c->areaOfSquare = a * a;
    return c;
}

void Display(struct Calculator *c) {
    printf("Side1 = %f\n", *(c->side1));
    printf("Side2 = %f\n", *(c->side2));
    printf("Side3 = %f\n", *(c->side3));
    printf("Area of Triangle = %f\n", c->areaOfTriangle);
    printf("Area of Square (side1) = %f\n", c->areaOfSquare);
}

int main() {
    struct Calculator c;
    AllocateMemory(&c);

    printf("Enter three sides:\n");
	printf("side 1:");
	scanf("%f", c.side1);
	printf("\nside 2:");
	scanf("%f", c.side2);
	printf("\nside 3:");
	scanf("%f", c.side3);
    

    CalculateAreaOfTriangle(&c);
    Display(&c);

    free(c.side1);
    free(c.side2);
    free(c.side3);

    return 0;
}
