#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - En try point of the program
 * Description: concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

while (s1 && s1[l1])
l1++;
while (s2 && s2[l2])
l2++;

if (n < l2)
s = malloc(sizeof(char) * (l1 + n + 1));
else
s = malloc(sizeof(char) * (l1 + l2 + 1));

if (!s)
return (NULL);

while (a < l1)
{
s[a] = s1[a];
a++;
}

while (n < l2 && a < (l1 + n))
s[a++] = s2[b++];

while (n >= l2 && a < (l1 + l2))
s[a++] = s2[b++];

s[a] = '\0';

return (s);
}
