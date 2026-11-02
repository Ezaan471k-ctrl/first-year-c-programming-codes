#include <stdio.h>

int main() {
    int n1, n2, i, a[50], b[50], c[100];
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
        c[i] = a[i];
    for (i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
