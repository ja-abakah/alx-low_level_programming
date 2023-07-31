#include "main.h"

/**
 * _strstr - Entry point of the program
 * Description: Searches a string for any of a set of bytes.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the string containing the occurrance to search for.
 *
 * Return: Pointer to the first occurrence in @s of any of the bytes in
 * @accept, or NULL if no such byte is found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;

while (*a == *b && *b != '\0')
{
a++;
b++;
}

if (*b == '\0')
return (haystack);
}
return (NULL);
}
