#include <stdio.h>

long fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void toh(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    toh(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    toh(n - 1, aux, to, from);
}

int main() {
    int n, a, b;
    printf("Enter n for factorial and Fibonacci: ");
    scanf("%d", &n);
    printf("Factorial = %ld\n", fact(n));
    printf("Fibonacci term = %d\n", fib(n));

    printf("Enter two numbers for GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcd(a, b));

    printf("Enter number of disks for Tower of Hanoi: ");
    scanf("%d", &n);
    toh(n, 'A', 'C', 'B');
    return 0;
}
