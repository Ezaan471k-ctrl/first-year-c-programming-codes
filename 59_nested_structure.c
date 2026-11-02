#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Student {
    char name[50];
    int roll;
    struct Date dob;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.d, &s.dob.m, &s.dob.y);

    printf("Name: %s\nRoll: %d\nDOB: %02d-%02d-%d\n",
           s.name, s.roll, s.dob.d, s.dob.m, s.dob.y);
    return 0;
}
