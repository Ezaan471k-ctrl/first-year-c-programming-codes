#include <stdio.h>

long factorial(int n) {
    long f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %ld\n", factorial(n));
    return 0;
}
