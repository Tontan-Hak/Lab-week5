#include <stdio.h>
int main() {
    int htoi();
    printf("htoi('d835e') = %d\n", htoi("d835e"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));
}