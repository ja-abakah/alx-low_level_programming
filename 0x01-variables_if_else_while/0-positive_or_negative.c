#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include the necessary header for printf */

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to n and prints pos, zero or neg.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
