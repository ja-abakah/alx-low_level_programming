#include "main.h"
/**
 * print_rev - Entry point of the program
 *
 * Description: Prints a string in reverse.
 * 
 * @s: string to be reversed
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
int j = 0;
int O;

while (*s != '\0')
{
j++;
s++;
}
s--;
for (O = j; O > 0; O--)
{
_putchar(*S);
s--;
}
_putchar('\n');

}
