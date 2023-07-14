#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include the necessary header for printf */

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to and print corresponding message.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n, m;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Get the last digit of n using the modulo operator */

m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
if (m == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
if (m < 6 && m != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}

return (0);
}
