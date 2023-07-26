#include "main.h"

/**
 * _strncat - Entry point of the program
 *
 * Description: This program creates two strings.
 * @dest: the string to be append upon.
 * @src: The string to append on dest.
 * @n: The number of bytes.
 *
 * Return: 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
int index, dest_len;

index = 0;
dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
