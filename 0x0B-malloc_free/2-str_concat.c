#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Entry point of the program
 * Description: Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *s;
i = 0;
j = 0;
k = 0;
l = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;
while (s2[j])
j++;

l = i + j;
s = malloc((sizeof(char) * l) +1);

if (s == NULL)
return (NULL);

while (k < l)
{
if  (k <= i)
s[k] = s1[k];

if (k >= i)
{
s[k] = s2[j];
}
k++;
}

s[k] = '\0';
return (s);
}
