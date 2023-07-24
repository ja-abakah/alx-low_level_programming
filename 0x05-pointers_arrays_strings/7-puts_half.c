#include "main.h"

/**
 * puts_half - Entry point of the program
 *
 * Description: It prints half of the string.
 * @str: the string to be treated.
 *
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
int i, j;

j = 0;

while (str[j] != '\0')
{
j++;
}
if (j % 2 == 1)
{
i = ((j - 1) / 2);
i += 1;
}
else
{
i = j / 2;
}
for (; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
