#include <stdio.h>

int main() {
    int x;
    int *p;
    printf("Enter a number: ");
    scanf("%d", &x);
    p = &x;
    printf("Value = %d\n", x);
    printf("Address = %p\n", (void *)p);
    printf("Value using pointer = %d\n", *p);
    return 0;
}
