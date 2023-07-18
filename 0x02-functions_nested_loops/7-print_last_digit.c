#include "main.h"
/**
 * print_last_digit - Entry point of the program
 *
 * Description: Prints the last digit of a number.
 * @l: returns the number print_last_digit
 * *
 * Return: d to print the last digit
 */
int print_last_digit(int l)
{
int d;

if (l < 0)
l = -l;

d = l % 10;

if (d < 0)
d = -d;
_putchar(d + '0');

return (d);
}
