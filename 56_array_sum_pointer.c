#include <stdio.h>

int main() {
    int n, i, a[100], sum = 0;
    int *p;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;
    for (i = 0; i < n; i++)
        sum += *(p + i);

    printf("Sum = %d\n", sum);
    return 0;
}
