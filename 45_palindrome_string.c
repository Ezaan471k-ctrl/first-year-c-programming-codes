#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, flag = 1;
    printf("Enter a string: ");
    scanf(" %[^\n]", s);

    n = strlen(s);
    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome string\n");

    return 0;
}
