#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s, *p;
    p = &s;

    printf("Enter name: ");
    scanf(" %[^\n]", p->name);
    printf("Enter roll: ");
    scanf("%d", &p->roll);
    printf("Enter marks: ");
    scanf("%f", &p->marks);

    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", p->name, p->roll, p->marks);
    return 0;
}
