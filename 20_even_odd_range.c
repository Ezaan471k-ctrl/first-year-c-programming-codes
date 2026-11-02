#include <stdio.h>

int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nOdd numbers: ");
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
