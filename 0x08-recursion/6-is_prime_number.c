#include "main.h"

/**
 * check_prime - Helper function to check if the number is prime.
 * @n: The number to check.
 * @divisor: The current divisor to check for divisibility.
 *
 * Return: 1 if @n is a prime number, otherwise return 0.
 */
int check_prime(int n, int divisor)
{
if (divisor >= n)
return (1);

if (n % divisor == 0)
return (0);

return (check_prime(n, divisor + 1));
}


/**
 * is_prime_number - Entry point of the program
 * Description: Checks if the input integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if @n is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (check_prime(n, 2));
}
