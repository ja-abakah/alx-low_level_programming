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
int d1, d2;

for (d1 = 0; d1 < 9; d1++)
{
for (d2 = d1 + 1; d2 <= 9; d2++)
{
putchar(d1 + '0');
putchar(d2 + '0');

if (d1 != 8 || d2 != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
