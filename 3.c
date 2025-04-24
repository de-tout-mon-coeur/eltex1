#include <stdio.h>

int countOnes(unsigned int number)
{
    int bits = sizeof(number) * 8;
    int count = 0;
    int i = bits - 1;
    
    for (i; i >= 0; i--)
    {
        int bit = (number >> i) & 1;
        
        if (bit & 1)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    unsigned int input;
    
    printf("Enter number: ");
    scanf("%u", &input);
    
    int numOfOnes = countOnes(input);
    printf("Number of ones in binary: %d\n", numOfOnes);
    
    return 0;
}
