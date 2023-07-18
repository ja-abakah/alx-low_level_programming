#include "main.h"
/**
 * _islower - Entry point of the program
 *
 * Description:  Checkes for lowercase character.
 *@c: is the character to be checked
 *
 * Return: 1 for lowercase or 0 for others.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
