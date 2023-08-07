#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point of the program
 * Description: Duplicates a string in newly allocated memory.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int length = 0, i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

dup_str = malloc(sizeof(char) * (length + 1));
if (dup_str == NULL)
return (NULL);

for (i = 0; i <= length; i++)
dup_str[i] = str[i];

return (dup_str);
}
