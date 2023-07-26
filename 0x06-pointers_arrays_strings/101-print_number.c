#include "main.h"

/**
 * print_number - Entry point of the program
 *
 * Description: the program prints an integer.
 * @n: the integer to be printed.
 *
 * Return: 0 (Success)
 */

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
_putchar('-');
n1 = -n;
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
