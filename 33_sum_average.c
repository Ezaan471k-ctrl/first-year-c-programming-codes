#include <stdio.h>

int main() {
    int n, i, a[100], sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / n);
    return 0;
}
