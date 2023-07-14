#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include the necessary header for printf*/

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to and print corresponding message.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int lastDigit = n % 10;  /* Get the last digit of n using the modulo operator*/

printf("Last digit of %d is ", n);

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
