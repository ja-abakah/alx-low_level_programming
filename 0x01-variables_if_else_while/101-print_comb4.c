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
int d1, d2, d3;

for (d1 = 48; d1 < 58; d1++)
{
for (d2 = d1 +1 ; d2 < 58; d2++)
{
for (d3 = d2 + 1; d3 < 58; d3++)
{
putchar(d1);
putchar(d2);
putchar(d3);

if (d1 != 55 || d2 != 56 || d3 != 57)
{
putchar(',');
putchar(' ');
}
}
}
}


putchar('\n');

return (0);
}
