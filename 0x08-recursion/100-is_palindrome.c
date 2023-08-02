#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Helper function to check if the string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 otherwise return 0.
 */
int comparator(char *s, int start, int end)
{
if (*(s + start) == *(s + end))
{
if (start == end || start == end + 1)
return (1);

return (0 + comparator(s, start + 1, end - 1));
return (0);
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
if (*s == '\0')
return (1);

return (comparator(s, 0, _strlen_recursion(s) - 1));
}
