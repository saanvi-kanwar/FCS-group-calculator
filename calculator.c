#include <stdio.h>

int main() {
    int choice;
    int num1, num2;
    int result;

    while (1) {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Thank you for using our calculator!\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Invalid choice! Please select between 1 and 6.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %d\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %d\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %d\n", result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2f\n", (float)num1 / num2);
                }
                break;

            case 5:
                if (num2 == 0) {
                    printf("Error! Modulus by zero is not allowed.\n");
                } else {
                    result = num1 % num2;
                    printf("Remainder = %d\n", result);
                }
                break;
        }
    }

    return 0;
}