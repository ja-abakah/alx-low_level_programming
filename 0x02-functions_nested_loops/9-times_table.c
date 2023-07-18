#include "main.h"
/**
 * times_table - Entry point of the program
 *
 * Description: Prints the 9 times table starting with 0.
 *
 * Return: 0 (Success)
 */
void times_table(void)
{
int A, B, C;

for (A = 0; A < 10; A++)
{
for (B = 0; B < 10; B++)
{
C = A * B;
if (B == 0)
{
_putchar(C + '0');
}
if (C < 10 && B != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(C + '0');
}
else if (C >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((C / 10) + '0');
_putchar((C % 10) + '0');
}
}
_putchar('\n');
}
}
