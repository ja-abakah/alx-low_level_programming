#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error.
 *
 * Return: 1 (Error)
 */
int main(void)
{
const char *m = "and that piece of art is useful\- Dora Korpar, 2015-10-19\n";
write(2, m, 59);
return (1);
}
