#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int n, i;
    printf("Enter number of students (max 5): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nAll students:\n");
    for (i = 0; i < n; i++)
        printf("%s  %d  %.2f\n", s[i].name, s[i].roll, s[i].marks);

    return 0;
}
