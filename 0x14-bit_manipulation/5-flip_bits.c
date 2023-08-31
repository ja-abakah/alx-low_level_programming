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
int i, c = 0;
unsigned long int cur;
unsigned long int j = n ^ m;

for (i = 63; i >= 0; i--)
{
cur = j >> i;
if (cur & 1)
c++;
}

return (c);
}
