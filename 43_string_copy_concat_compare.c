#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], copy[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    strcpy(copy, s1);
    printf("Copied string = %s\n", copy);

    strcat(s1, s2);
    printf("Concatenated string = %s\n", s1);

    if (strcmp(copy, s2) == 0)
        printf("Original first and second strings are equal\n");
    else
        printf("Original first and second strings are not equal\n");

    return 0;
}
