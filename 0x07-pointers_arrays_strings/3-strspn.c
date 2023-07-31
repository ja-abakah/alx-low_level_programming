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
unsigned int lenght;
int found;

length = 0;
found = 0;

while (*s && !found)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
length++;
found = 1;
break;
}
a++;
}

if (!found)
s++;
}

return (length);
}
