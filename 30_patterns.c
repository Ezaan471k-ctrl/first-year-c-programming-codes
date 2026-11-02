#include <stdio.h>

int main() {
    int n, i, j, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nStar triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\nNumber pyramid:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\nFloyd's triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", num++);
        printf("\n");
    }

    return 0;
}
