#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single-digit numbers of base 10 starting from 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');
}

putchar('\n');

return (0);
}
