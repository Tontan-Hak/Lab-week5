#include "stdio.h"

int main() {
    float num, total = 0.0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        total += num;
    }

    printf("The total is: %.1f\n", total);
    printf("The average is: %.2f\n", total / 5.0);

    return 0;
}
