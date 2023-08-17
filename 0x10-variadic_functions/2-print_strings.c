#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings.
 * @separator: The string to be printed.
 * @n: The number of strings.
 * @...: The strings to be printed.
 *
 * Description: This function prints the given strings, separated by
 * the provided @separator string. It prints a new line
 * at the end. If a string is NULL, it prints (nil).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
const char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
