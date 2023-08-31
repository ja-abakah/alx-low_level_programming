#include "main.h"

/**
 * set_bit - Entry of program
 * Description: Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number where the bit will be set.
 * @index: The index of the bit to be set (starting from 0).
 *
 * Return: 1 successful, or -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n |= (1ul << index);

return (1);
}
