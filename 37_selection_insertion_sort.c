#include <stdio.h>

int main() {
    int n, i, j, min, key, temp, a[100], b[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Selection sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 1; i < n; i++) {
        key = b[i];
        j = i - 1;
        while (j >= 0 && b[j] > key) {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = key;
    }

    printf("\nInsertion sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
