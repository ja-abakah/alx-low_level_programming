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
char a;

/* Print lowercase alphabet */
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}

/* Print uppercase alphabet */
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}

putchar('\n');

return (0);
}
