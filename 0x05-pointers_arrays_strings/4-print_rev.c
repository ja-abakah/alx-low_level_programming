#include "main.h"
/**
 * print_rev - Entry point of the program
 *
 * Description: Prints a string in reverse.
 * @s: string to be reversed
 * Return: 0 (Success)
*/

void print_rev(char *s)
{
int o;

o  = 0;

while (s[o] != '\0')
{
o++;
}
for (o -= 1; o >= 0; o--)
{
_putchar(s[o]);
}
_putchar('\n');

}
