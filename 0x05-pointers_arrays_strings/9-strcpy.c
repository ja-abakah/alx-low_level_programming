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
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest)
}
