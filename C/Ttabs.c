#include <stdio.h>

int main() {
    // Step 1: Use \t to align the columns for Fruit and Price
    // Example output:
    // Fruit      Price
    // -----------------
    // Apple      $1.00
    // Banana     $0.50
    // Cherry     $2.00
    printf("Fruit\tPrice\n");
    printf("--------------\n");
    printf("Apple\t$1.00\n");
    printf("Banana\t$0.50\n");
    printf("Cherry\t$2.00\n");

    return 0;
}