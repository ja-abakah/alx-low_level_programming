#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char d;

/* Print 0-9 */
for (d = '0'; d <= '9'; d++)
{
putchar(d);
}

/* Print a-f */
for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}

putchar('\n');

return (0);
}
