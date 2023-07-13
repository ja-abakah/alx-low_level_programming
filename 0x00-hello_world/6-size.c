#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This prints the types on the computer it is compiled.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a) * 8);
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b) * 8);
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c) * 8);
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d) * 8);
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f) * 8);
return (0);
}
