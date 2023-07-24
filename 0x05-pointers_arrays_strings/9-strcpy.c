#include "main.h"

/**
 * _strcpy - Entry point of the program
 *
 * Description: Copying string pointed to by src.
 * @dest: destination value
 * @src: source
 *
 * Return: 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (*(src + i) != '\0')
{
i++;
}
for (; j < i; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest)
}
