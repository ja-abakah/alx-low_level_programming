#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Printing alphabets using putchar.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;
char d;

c = 'a';
d = 'A';
while
(c = 'z')
{
putchar(c);
c++;
}

while
(d = 'Z')
{
putchar(d);
d++;
}

putchar("\n");

return (0);
}
