#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @start: The starting value for the search.
 * @end: The ending value for the search.
 *
 * Return: The natural square root of @n, or -1 if not found.
 */
int find_sqrt(int n, int start, int end)
{
int mid = (start + end) / 2;

if (start <= end)
{
if (mid * mid == n)
return (mid);
else if (mid * mid < n)
return (find_sqrt(n, mid + 1, end));
else
return (find_sqrt(n, start, mid - 1));
}

return (-1);
}

/**
 * _sqrt_recursion - Entry point of the program
 * Description: Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of @n,
 * or -1 if @n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (find_sqrt(n, 1, n));
}
