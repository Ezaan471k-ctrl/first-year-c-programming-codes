#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent details\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    return 0;
}
