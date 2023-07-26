#include "main.h"

/**
 * _strcat - Entry point of the program
 *
 * Description: Appends on string over another and overwrite.
 * @dest: Input value.
 * @src: Input value.
 *
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
