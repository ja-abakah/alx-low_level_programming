#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - Entry of the program
 * Description: The program prints the sum diagonals of a square matrix.
 * @a: The array.
 * @size: The input.
 * Return: 0 (success)
 */

void print_diagsums(int *a, int size)
{
int b, c, d, e;

d = 0;
e = 0;

for (b = 0; b <= (size * size); b = b + +1)
d = d + a[b];

for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
e = e + a[c]
printf("%d, %d\n", d, e);
}
