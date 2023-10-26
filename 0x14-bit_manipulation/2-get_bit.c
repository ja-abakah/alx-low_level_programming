#include "main.h"

/**
 * get_bit - Entry of program
 * Description: Returns the value of a bit at a given index.
 * @n: The number extract bit from.
 * @index: index of bit to be extracted.
 *
 * Return: bit at the given index, or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

return ((n >> index) & 1);
}
