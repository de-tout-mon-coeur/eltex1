#include <stdio.h>

void decToBin(unsigned int number)
{
    int bits = sizeof(number) * 8;
    int i = bits - 1;
    
    for (i; i >= 0; i--)
    {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
}

int main()
{
    unsigned int input;
    
    printf("Enter number: ");
    scanf("%u", &input);
    
    printf("Binary: ");
    decToBin(input);
    
    return 0;
}
