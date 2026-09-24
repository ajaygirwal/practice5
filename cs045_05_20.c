#include <stdio.h>

// Function declarations for arithmetic operations
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    float num1, num2, result;

    // Displaying the menu
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    // Reading choice and operands
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Processing the choice using a switch statement
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result = %.0f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result = %.0f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result = %.0f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
