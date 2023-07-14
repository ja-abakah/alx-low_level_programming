#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Printing alphabets using putchar.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

putchar('\n');

return (0);
}
