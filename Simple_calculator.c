#include <stdio.h>

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {  // Handle invalid input
            printf("Invalid input. Exiting.\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            // Prompt user for two numbers
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);

            // Perform operation based on user choice
            switch (choice) {
                case 1: // Addition
                    result = add(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 2: // Subtraction
                    result = subtract(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 3: // Multiplication
                    result = multiply(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 4: // Division
                    if (num2 != 0) {
                        result = divide(num1, num2);
                        printf("Result: %.2f\n", result);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
            }
        } else if (choice == 5) { // Exit
            printf("Exiting the calculator. Thank you!\n");
        } else { // Invalid choice
            printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("\n--- Simple Calculator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    return a / b;
}