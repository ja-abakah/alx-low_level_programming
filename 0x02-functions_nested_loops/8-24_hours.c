#include "main.h"
/**
 * jack_bauer - Entry point of the program
 *
 * Description: prints every minute of the day.
 *
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
int M, S;
for (M = 0; M < 24; M++)
{
for (S = 0; S < 60; S++)
{
_putchar((M / 10) + '0');
_putchar((M % 10) + '0');
_putchar(':');
_putchar((S / 10) + '0');
_putchar((S % 10) + '0');
_putchar('\n');
}
}
}
