#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
int length = _strlen(s);

return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Recursively checks if a substring is a palindrome.
 *
 * @s: The string to check.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, otherwise 0.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (check_palindrome(s, start + 1, end - 1));
}
