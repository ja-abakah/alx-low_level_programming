#include "main.h"

/**
 * clear_bit - Entry of program
 * Description: Sets the value of bit to 0 at given index.
 * @n: A pointer to number where bit is cleared.
 * @index: The index of bit to clear.
 *
 * Return: 1 successful, or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n &= ~(1ul << index);

return (1);
}
