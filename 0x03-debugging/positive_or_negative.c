#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include the necessary header for printf */

/**
 * positive_or_negative - Entry point of the program
 * 0i : Integer
 *
 * Description: Determines pos, zero or neg.
 *
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
