#include "main.h"

/**
 * string_toupper - Entry point of the program
 *
 * Description: Changes all lowercase letters to upper in a string.
 * @str: string to be changed.
 *
 * Return: 0 (Success)
 */

char *string_toupper(char *str)
{
int j;

j = 0;

while (str[j])
{
if (str[j] >= 'a' && str[j] <= 'z')
str[j] -= 32;
j++;
}
return (str);
}
