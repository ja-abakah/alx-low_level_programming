#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line.
 *
 * Return: 0 (Success)
 */

char *string_toupper(char *)
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
