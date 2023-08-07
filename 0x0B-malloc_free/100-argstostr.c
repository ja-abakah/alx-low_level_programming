#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Entry point of the program
 * Description: Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k = 0, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;  /* Count for '\n' */
}

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
