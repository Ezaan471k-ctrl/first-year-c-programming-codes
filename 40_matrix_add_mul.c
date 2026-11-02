#include <stdio.h>

int main() {
    int r, c, i, j, k;
    int a[10][10], b[10][10], sum[10][10], mul[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("\nAddition:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication (square-style, using %d x %d):\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
                mul[i][j] += a[i][k] * b[k][j];
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
