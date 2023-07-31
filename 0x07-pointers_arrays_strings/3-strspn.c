#include "main.h"

/**
 * _strspn - Entry point of the program
 * Description: Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of @s,
 * consisting only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, v, ch;

v = 0;

for (i = 0; s[i] != '\0'; i++)
{
ch = 0;

for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
v++;
ch = 1;
}
}

if (ch == 0)
break;
}
return (v);
}
