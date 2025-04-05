#include <stdio.h>
#include <stdlib.h>  // For exit()

// Function to perform addition
int add() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    return num1 + num2;
}

// Function to perform subtraction
void subtract() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

// Function to perform multiplication
int multiply() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    return num1 * num2;
}

// Function to perform division
void divide() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num2 != 0) {
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Quit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Result: %d\n", add());
                break;
            case 2:
                subtract();
                break;
            case 3:
                printf("Result: %d\n", multiply());
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("Thanks for using the calculator. Goodbye!\n");
                exit(0);  // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
