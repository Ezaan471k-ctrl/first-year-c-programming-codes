#include <stdio.h>

int main() {
    int n, i, a[100];
    int *p;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;
    printf("Array using pointer: ");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
