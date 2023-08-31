include "main.h"

/**
 * flip_bits - Entry of program
 * Description: Returns number of bits to flip
 * to get from one number to another.
 * @n: The 1st number.
 * @m: The 2nd number.
 *
 * Return: bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = n ^ m;
unsigned int c = 0;

while (i)
{
c += i & 1;
i >>= 1;
}

return (c);
}
