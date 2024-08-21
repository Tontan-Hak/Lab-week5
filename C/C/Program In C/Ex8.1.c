#include "stdio.h"

int main() {
    float num, total = 0.0;
    int i;

    // Loop to get 5 floating-point numbers from the user
    for (i = 1; i <= 5; i++) {
        scanf("%f", &num);  // Read the number without any prompt
        total += num;       // Add the entered number to the total
    }

    // Calculate the average
    float average = total / 5.0;

    // Print the total and average
    printf("The total is: %.1f\n", total);
    printf("The average is: %.1f\n", average);

    return 0;
}

