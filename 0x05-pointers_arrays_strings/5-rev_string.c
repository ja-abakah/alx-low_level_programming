#include "main.h"
/**
 * rev_string - Entry point of the program
 *
 * Description: Prints reverse string.
 * @s: the string input
 * Return: 0 (Success)
 */

void rev_string(char *s)
{
int i, j;
char rev;

j = 0;
i = 0;

while (s[j++])
i++;

for (j = i - 1; j >= i / 2;  j--)
{
rev = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = rev;
}
}
