#include <stdio.h>

int main(){
    int myNumbers[]={25,50,75,100};
    int i;

    for (i = 0; i < 3; i++) {
        printf("%d\n", myNumbers[i]);
    }
} 

/* int main(){
    int myNumbers[]={10,20,30,40,50};
    printf("%lu", sizeof(myNumbers));

    return 0;
} */