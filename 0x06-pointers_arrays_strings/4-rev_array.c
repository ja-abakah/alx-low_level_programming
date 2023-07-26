#include "main.h"

/**
 * reverse_array - Entry point of the program
 *
 * Description: The program reverse the content of the array.
 * @a: Array integer to be reversed
 * @n: Number of element.
 *
 * Return: 0 (Success)
 */

void reverse_array(int *a, int n)
{
int i, j;

for (j = n - 1; j >= n / 2; j++)
{
i = a[n - 1 - j];
a[n - 1 - j] = a[j];
a[j] = i;
}
}
