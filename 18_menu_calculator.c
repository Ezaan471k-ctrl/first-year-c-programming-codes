#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Sum = %.2f\n", a + b);
                break;
            case 2:
                printf("Difference = %.2f\n", a - b);
                break;
            case 3:
                printf("Product = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Quotient = %.2f\n", a / b);
                else
                    printf("Division by zero is not allowed\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
