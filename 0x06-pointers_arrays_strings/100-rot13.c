#include "main.h"

/**
 * rot13 - Entry point of the program
 *
 * Description: This program encodes a string using rot13.
 * @s: Pointer to the string.
 *
 * Return: 0 (Success)
 */

char *rot13(char *s)
{
int i, j;

char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; h < 52; j++)
{
if (s[i] == d1[j])
{
s[i] = drot[j];
break;
}
}
}
return (s);
}
