#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line.
 *
 * Return: 0 (Success)
 */

void puts2(char *str)
{
int o, t, longi;

longi = 0;
t = 0;
char *y = str;

while (*y != '\0')
{
y++;
longi++;
}
t = longi - 1;
for (o = 0 ; o <= t ; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
