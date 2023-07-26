#include "main.h"

/**
 * infinite_add - Entry point of the program
 *
 * Description: The program adds two numbers.
 * @n1: the first number
 * @n2: the second number.
 * @r: the buffer
 * @size_r: buffer size
 * Return: 0 (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int idx_r = size_r - 1;
int idx_n1 = 0;
int idx_n2 = 0;

while (n1[idx_n1] != '\0')
idx_n1++;
while (n2[idx_n2] != '\0')
idx_n2++;

r[idx_r] = '\0';
idx_r--;

while (idx_n1 > 0 || idx_n2 > 0 || carry)
{
int digit1 = (idx_n1 > 0) ? n1[--idx_n1] - '0' : 0;
int digit2 = (idx_n2 > 0) ? n2[--idx_n2] - '0' : 0;

int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[idx_r--] = (sum % 10) + '0';

if (idx_r < 0 && (idx_n1 > 0 || idx_n2 > 0 || carry))
return (0);
}

return (&r[idx_r + 1]);
}
