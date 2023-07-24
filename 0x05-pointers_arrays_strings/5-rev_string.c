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
char rev = s[0];
j = 0;

while (s[j] != '\0')
{
j++;
}
for (i = 0; i < counter; i++)
{
j--;
rev = s[i];
s[i] = s[j];
s[j] = rev;
}
}
