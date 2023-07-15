#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int d, e, f;

for (d = 48; d < 58; d++)
{
for (e = 49; e < 58; e++)
{
for (f = 50; f < 58; f++)
{
if (f > e && e > d)
{
putchar(d);
putchar(e);
putchar(f);

if (d != 55 || e != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);
}
