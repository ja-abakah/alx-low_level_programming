#include "main.h"

/**
 * get_endianness - Entry of program
 * Description: Checks the endianness of a system.
 *
 * Return: 0 (endian), 1 (little endian).
 */
int get_endianness(void)
{
unsigned int value = 1;
unsigned char *byte = (unsigned char *)&value;

return (*byte == 1);
}
