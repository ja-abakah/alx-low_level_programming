#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The arguments to sum.
 *
 * Return: The sum of all the arguments.
 *
 * Description: This function calculates the sum of all its arguments.
 * If n is 0, it returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;
if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
