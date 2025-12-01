#include <stdio.h>

int main() {
    int fibonacci[7] = {1, 2, 3, 5, 8, 13, 21};
    int position;

    // Gets input number choice to find its representative on the fibonacci sequence.
    printf("Enter a number positiion to find its value on the sequence (max 6): \n");
    scanf("%d", &position);

    // Checks if the number is valid.
    if (position >= 7) {
        printf("Too high\n");
    }
    else if (position < 0) {
        printf("Too low\n");
    }

    // Show the number.
    printf("The number on position %d is %d \n", position, fibonacci[position]);

    // Prints a statement.
    printf("The whole sequence:\n");

    // Shows the whole sequence.
    for (int i = 0; i <= 6; i++) {
        printf("%d\n", fibonacci[i]);
    }
    return 0;
}