#include "main.h"

/**
 * print_alphabet - Entry point of the program
 *
 * Description: Prints all letters of the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a', letter <= 'z', letter++)
_putchar(letter);
_putchar('\n');
return (0);
}
