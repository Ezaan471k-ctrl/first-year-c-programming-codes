#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside call by value: a = %d, b = %d\n", a, b);
}

void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before: x = %d, y = %d\n", x, y);
    swapValue(x, y);
    printf("After call by value: x = %d, y = %d\n", x, y);

    swapReference(&x, &y);
    printf("After call by reference: x = %d, y = %d\n", x, y);
    return 0;
}
