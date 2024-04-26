#include <stdio.h>

/* void myFunction(char *name, int age){
    printf("My name is %s and I am %d years old\n", name, age);
}

int main(){
    myFunction("John",50);
    myFunction("Doe", 30);
    myFunction("Jane", 25);

    return 0; 
} */

void myFunction(int myNumber[5]){
    for (int i = 0; i < 5; i++){
        printf("%d\n", myNumber[i]);
    }
}

int main(){
    int myNumber[5] = {12,24,36,48,52};
    myFunction(myNumber);
    return 0;
}

/* int myFunction(int x, int y){
    return x + y;
}
int main(){
    int result = myFunction(10, 20);
    printf("The result is %d\n", result);
    return 0;
}
*/