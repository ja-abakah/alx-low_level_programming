#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point of the program
 *
 * Description: Prints n elements in array.
 * @a: array of integers
 * @n: number of elements in array
 * Return: 0 (Success)
 */

void print_array(int *a, int n)
{
int j;

for (j = 0; j < (n - 1); j++)
{
printf("%d, ",  a[j]);
}
if (j == (n - 1))
{
printf("%d", a[n - 1]);
}

printf("\n");
}
