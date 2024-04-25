// Find the lowest age in an array of ages

#include <stdio.h>

/* int main(){
    int ages[]={20,22,18,35,48,26,87,45,32,19};
    int length = sizeof(ages)/sizeof(ages[0]);

    int lowestAge = ages[0];

    for (int i = 0; i < length; i++) {
        if (ages[i] < lowestAge) {
            lowestAge = ages[i];
        }
    }
    printf("The lowest age is %d", lowestAge);

    return 0;
} */

// Find the average age in an array of ages

int main() {
  // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    
    float avg, sum = 0;
    int i;
    
  // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);
    
  // Loop through the elements of the array and accumulate the sum
    for (int i = 0; i < length; i++) {
    sum += ages[i];
    }
    
  // Calculate the average by dividing the sum by the length
    avg = sum / length;
    
  // Print the average
    printf("The average age is: %.2f", avg);
    
    return 0;
}

/*int main() {
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
        printf("%d\n", matrix[i][j]);
        }
    }
    
    return 0;
}*/