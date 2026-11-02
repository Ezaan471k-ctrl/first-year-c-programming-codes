#include <stdio.h>

int main() {
    int n, i, key, a[100], low, high, mid, found = 0;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Not found\n");

    return 0;
}
