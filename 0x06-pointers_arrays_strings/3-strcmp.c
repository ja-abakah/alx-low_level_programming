#include "main.h"

/**
 * _strcmp - Entry point of the program
 *
 * Description: This program compares two strings.
 * @s1: First string
 * @s2: Second string.
 *
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
