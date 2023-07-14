#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int c;

for (c = 0; c <= 9; c++)
{
putchar(c + '0');
}

putchar('\n');

return (0);
}
