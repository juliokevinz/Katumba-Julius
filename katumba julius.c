#include <stdio.h>

int main() {
    int number;

    // Label to jump back to in case of invalid input
    retry:
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input! Try again.\n");
        goto retry;  // Jump back to retry
    }

    printf("You entered: %d\n", number);
    return 0;
}
