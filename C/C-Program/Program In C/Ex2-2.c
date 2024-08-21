int htoi(char s[]) {
    int i = 0, n = 0;
    int value;

    // Iterate through each character of the string
    while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            value = s[i] - '0'; // Convert the digit to an integer
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            value = s[i] - 'a' + 10; // Convert 'a' to 'f' to 10 to 15
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            value = s[i] - 'A' + 10; // Convert 'A' to 'F' to 10 to 15
        } else {
            break; // Stop if the character is not a valid hexadecimal digit
        }

        n = 16 * n + value; // Multiply the current value by 16 and add the new digit
        i++;
    }

    return n; // Return the final converted integer value
}
