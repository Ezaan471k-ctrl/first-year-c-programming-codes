#include <stdio.h>
#include <string.h>

int main() {
    char s[100], temp;
    int i, n;
    printf("Enter a string: ");
    scanf(" %[^\n]", s);

    n = strlen(s);
    for (i = 0; i < n / 2; i++) {
        temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }

    printf("Reversed string = %s\n", s);
    return 0;
}
