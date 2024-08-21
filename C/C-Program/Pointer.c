#include <stdio.h>

/* int main(){
    int myAge = 30;
    int* pAge = &myAge;

    printf("%d\n", myAge);
    printf("%p", &myAge);
    printf("\n%p", *pAge);

    return 0;
} */

int main(){
    int myNumbers[4]= {25, 50, 75, 100};
    int i;

    for(i = 0; i < 4; i++){
        printf("Element %d: %d\n", i, myNumbers[i]);
    }
    return 0;
}