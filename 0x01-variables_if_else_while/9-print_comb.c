#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n + '0');

if (n != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
