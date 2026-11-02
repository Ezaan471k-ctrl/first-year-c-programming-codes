#include <stdio.h>

int main() {
    char s[200];
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }

    printf("Converted string = %s\n", s);
    return 0;
}
