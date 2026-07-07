#include <stdio.h>

int Calculate(int, int, int);
char Grade(int);

int main() {
    int m1, m2, m3, result;
    char grade;

    printf("Enter the marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    result = Calculate(m1, m2, m3);
    grade = Grade(result);

    printf("Grade: %c\n", grade);
    printf("Percentage: %d%%", result);

    return 0;
}

int Calculate(int x, int y, int z) {
    int per = (x + y + z) / 3;
    return per;
}

char Grade(int per) {
    if (per >= 90)
        return 'A';
    else if (per >= 80)
        return 'B';
    else if (per >= 70)
        return 'C';
    else if (per >= 60)
        return 'D';
    else
        return 'F';
}
