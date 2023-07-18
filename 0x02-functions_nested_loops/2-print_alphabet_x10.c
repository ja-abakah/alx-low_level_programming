#include "main.h"

/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Description: Prints 10 times the letters of the alphabets.
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char letter;
int A;

A = 0;
while (A < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
A++;
}

}
