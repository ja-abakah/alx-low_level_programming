#include "main.h"

/**
 * print_sign - Entry point of the program
 *
 * Description: Prints the sign of a number.
 *@n: check the pos or zero or neg.
 *
 * Return: 1 for pos, 0 for zero and -1 for neg
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
