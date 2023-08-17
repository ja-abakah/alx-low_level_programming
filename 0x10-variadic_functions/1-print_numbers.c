#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 *
 * Description: This function prints the given integers, separated by
 * the provided @separator string. It prints a new line
 * at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
