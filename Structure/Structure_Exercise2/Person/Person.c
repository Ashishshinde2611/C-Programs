/*

	- Create a structure "Person" with attribute name, age, height and weight.
	- create 3 objects for the structure Person and allocate the memory dynamically 
	- use -> operator to display the details. 

*/
#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	float height;
	float weight;
};


int main(){

	struct Person *p1 = malloc (sizeof(struct Person));
	struct Person *p2 = malloc (sizeof(struct Person)) ;
	struct Person *p3 = malloc (sizeof(struct Person));

        if(p1 == NULL || p2 == NULL || p3 == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
	

       printf("Enter details for Person 1:\n");
    printf("Name: ");
    scanf("%s", p1->name);
    printf("Age: ");
    scanf("%d", &p1->age);
    printf("Height: ");
    scanf("%f", &p1->height);
    printf("Weight: ");
    scanf("%f", &p1->weight);

    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    scanf("%s", p2->name);
    printf("Age: ");
    scanf("%d", &p2->age);
    printf("Height: ");
    scanf("%f", &p2->height);
    printf("Weight: ");
    scanf("%f", &p2->weight);

    printf("\nEnter details for Person 3:\n");
    printf("Name: ");
    scanf("%s", p3->name);
    printf("Age: ");
    scanf("%d", &p3->age);
    printf("Height: ");
    scanf("%f", &p3->height);
    printf("Weight: ");
    scanf("%f", &p3->weight);

    printf("\n--- Person Details ---\n");

    printf("\nPerson 1: %s, %d yrs, %.2f height, %.2f weight\n",
           p1->name, p1->age, p1->height, p1->weight);

    printf("Person 2: %s, %d yrs, %.2f height, %.2f weight\n",
           p2->name, p2->age, p2->height, p2->weight);

    printf("Person 3: %s, %d yrs, %.2f height, %.2f weight\n",
           p3->name, p3->age, p3->height, p3->weight);

    free(p1);
    free(p2);
    free(p3);

    return 0;
}
