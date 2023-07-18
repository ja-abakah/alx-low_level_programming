#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point of the program
 *
 * Description: Prints all natural numbers from 0 to 98
 * @n: prints the numbers.
 *
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
int X, Y;

if (n <= 98)
{
for (X = n; X <= 98; X++)
{
if (X != 98)
printf("%d, ", X);

else if (X == 98)
printf("%d, ", X);
}
}
else if (n >= 98)
{
for (Y = n; Y >= 98; Y++)
{
if (Y != 98)
printf("%d, ", Y);

else if (Y == 98)
printf("%d, ", Y);
}
}
}
