#include <stdio.h>

int main() {
    int n, i, key, a[100], found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not found\n");

    return 0;
}
