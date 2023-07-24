#include "main.h"
/**
 * _strlen - Entry point of the program
 *
 * Description: Returns the lenght of a string.
 *
 * @s: the input string
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
