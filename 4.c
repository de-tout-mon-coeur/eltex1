#include <stdio.h>

int main() {
    unsigned int number;
    unsigned char byte_input;

    printf("Enter number: ");
    scanf("%u", &number);

    printf("Enter byte value (0-255): ");
    scanf("%hhu", &byte_input);

    number = number & ~(0xFF << 16);
    number = number | (byte_input << 16);

    printf("Result: %u\n", number);

    return 0;
}
