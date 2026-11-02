#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
