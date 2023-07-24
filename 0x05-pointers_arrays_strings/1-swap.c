#include "main.h"
/**
 * swap_int - Entry point of the program
 *
 * Description: swaps two numbers
 * @a: input to be swapped
 * @b: input to be swapped.
 *
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
int j;

j = *a;
*a = *b;
*b = j;
}
