#include "main.h"

/**
 * _strncpy - Entry point of the program
 *
 * Description: This program copies a string.
 * @dest: the buffer storing.
 * @src: the source string.
 * @n: the maximum number of bytes.
 *
 * Return: 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
int index, src_len;

index = 0;
src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
