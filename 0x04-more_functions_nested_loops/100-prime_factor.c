#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 *
 * Description: inds and prints the largest prime
 * factor of the number 612852475143
 * followed by a new line
 * @z: integer to be printed
 * Return: Always 0 (Success)
 */

int main(void)
{
long int z;
long int max;
long int i;

z = 612852475143;
max = -1;

while (z % 2 == 0)
{
max = 2;
z /= 2;
}

for (i = 3; i <= sqrt(n); i = i + 2)
{
while (z % i == 0)
{
max = i;
n = z / i;
}
}

if (z > 2)
max = z;

printf("%ld\n", max);

return (0);
}
