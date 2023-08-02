#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * check_palindrome - Helper function to check if the string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, otherwise return 0.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Entry point of the program
 * Description: Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, otherwise return 0.
 */
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1)
return (1);

return (check_palindrome(s, 0, len - 1));
}
