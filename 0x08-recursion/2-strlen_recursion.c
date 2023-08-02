#include "main.h"

/**
 * _strlen_recursion - Entry point of the program
 * Description: Returns the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
