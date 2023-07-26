#include "main.h"

/**
 *  print_buffer - Entry point of the program
 *
 * Description: Prints buffer.
 * @b: the buffer in bytes
 * @size: the size of the buffer
 *
 * Return: 0 (Success)
 */

void print_buffer(char *b, int size)
{
int i, j, k, c;
i = 0;

if (size <= 0)
{
_putchar('\n');
return;
}
while (i < size)
{
j = size - i < 10 ? size - i : 10;
_putchar('%08x: ', i)

for (k = 0; k < 10; k++)
{
if (k < j)
_putchar('%02x', *(b + i + k));
else
_putchar(' ');

if (k % 2)
{
_putchar(' ');
}
}
for (k = 0; k < j; k++)
{
c = *(b + i + k);
if (c < 32 || c > 132)
{
_putchar('.');
}
_putchar('%c', c);
}
_putchar('\n');
i += 10;
}
}
