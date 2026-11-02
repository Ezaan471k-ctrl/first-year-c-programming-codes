#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", s);

    printf("Length using strlen = %zu\n", strlen(s));

    for (i = 0; s[i] != '\0'; i++)
        len++;
    printf("Length without strlen = %d\n", len);
    return 0;
}
