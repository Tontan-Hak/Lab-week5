#include <stdio.h>

int main() {
    int r, i, j;

    // Input the number of rows for the diamond
    printf("Enter number of rows for diamond: ");
    scanf("%d", &r);

    // Upper part of diamond
    for(i = 0; i <= r; i++) {
        // Printing leading spaces
        for(j = 1; j <= r - i; j++)
            printf(" ");

        // Printing stars
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Lower part of diamond
    for(i = r - 1; i >= 0; i--) {
        // Printing leading spaces
        for(j = 1; j <= r - i; j++)
            printf(" ");

        // Printing stars
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
