#include "main.h"

/**
 * print_number - Entry point of the program
 *
 * Description: prints an integer.
 * @n: integer to be printed
 * Return: 0 (Success)
 */

void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}

if (n1 / 10)
{
print_number(n1 / 10);
}

_putchar((n1 % 10) + '0');
}
