#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Entry of program
 * Description: Converts a binary number an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if invalid character or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;

if (b == NULL)
return (0);

for (; *b; b++)
{
if (*b != '0' && *b != '1')
return (0);

i = i * 2 + (*b - '0');
}

return (i);
}
