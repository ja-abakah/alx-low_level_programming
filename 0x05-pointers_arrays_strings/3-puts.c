#include "main.h"
/**
 * _puts - Entry point of the program
 *
 * Description: Prints a string and a new line.
 *@str: the string to be printed
 * Return: 0 (Success)
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
