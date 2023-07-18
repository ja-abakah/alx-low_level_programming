#include "main.h"
/**
 * _isalpha - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line.
 *@c: checks the letter.
 *
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
