#include "main.h"

/**
 * _strpbrk - Entry point of the program
 * Description: Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the set of bytes to search for.
 *
 * Return: Pointer to the first occurrence in @s of any of the bytes
 * in @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}

return ('\0');
}
