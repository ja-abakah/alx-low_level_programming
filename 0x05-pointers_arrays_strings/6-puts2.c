#include "main.h"

/**
 * puts2 - Entry point of the program
 *
 * Description: Prints every pther character.
 * @str: variable to be treated.
 * Return: 0 (Success)
 */

void puts2(char *str)
{
int i, j;

j = 0;

while (str[j] != '\0')
{
j++;
}

for (i = 0 ; i < j; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
