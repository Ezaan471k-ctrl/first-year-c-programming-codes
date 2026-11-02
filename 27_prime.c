#include <stdio.h>

int main() {
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 0;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    printf("Prime numbers from 1 to %d: ", n);
    int num, j, isPrime;
    for (num = 2; num <= n; num++) {
        isPrime = 1;
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
