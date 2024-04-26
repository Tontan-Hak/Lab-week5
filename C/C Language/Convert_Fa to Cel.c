#include <stdio.h>

float toCelcius(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}
int main(){
    float f_value = 98.6;
    float result = toCelcius(f_value);
    printf("Fahrenheit: %.2f\n", f_value);
    printf("Converted to Celcius: %.2f\n", result);

    return 0;
}

/*#include <stdio.h>

// Function declaration
int myFunction(int, int);

// The main method
int main() {  
  int result = myFunction(5, 3);  // call the function
    printf("Result is = %d", result);
    return 0;
}

// Function definition
    int myFunction(int x, int y) {
        return x + y;
}*/