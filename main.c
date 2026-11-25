#include <stdio.h>
#include "operations.h"
#include "input.h"

int main() {

    int choice;
    int num1, num2;

    while (1) {

        printf("\n========== CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("================================\n");

        choice = getIntInput("Enter your choice: ");

        if (choice == 6) {
            printf("Thank you for using our calculator!\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        num1 = getIntInput("Enter first number: ");
        num2 = getIntInput("Enter second number: ");

        switch (choice) {

            case 1:
                printf("Result = %.2f\n", add(num1, num2));
                break;

            case 2:
                printf("Result = %.2f\n", subtract(num1, num2));
                break;

            case 3:
                printf("Result = %.2f\n", multiply(num1, num2));
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2f\n", divide(num1, num2));
                }
                break;

            case 5:
                if (num2 == 0) {
                    printf("Error! Modulus by zero is not allowed.\n");
                } else {
                    printf("Remainder = %d\n", modulus(num1, num2));
                }
                break;
        }
    }

    return 0;
}