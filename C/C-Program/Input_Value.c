#include <stdio.h>

/* int main(){
    int myNum;
    printf("Type a number and press Enter: \n");
    scanf("%d", &myNum);

    printf("You entered: %d", myNum);

    return 0;
} */

int main(){
    char firstName[20];
    printf("Enter your first name and press enter:");
    scanf("%s", firstName);

    printf("Your first name is: %s", firstName);

    return 0;
}

/*int main() {
  // Create a string
    char fullName[30];

  // Ask the user to input some text (full name)
    printf("Type your full name and press enter: \n");

  // Get the text
    fgets(fullName, sizeof(fullName), stdin);

  // Output the text
    printf("Hello %s", fullName);
    
    return 0;
}*/