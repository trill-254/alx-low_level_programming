#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *start, *sub;

while (*haystack)
{
start = haystack;
sub = needle;

while (*haystack && *sub && *haystack == *sub)
{
haystack++;
sub++;
}

if (!*sub)
return (start);

haystack = start + 1;
}

return (NULL);
}
