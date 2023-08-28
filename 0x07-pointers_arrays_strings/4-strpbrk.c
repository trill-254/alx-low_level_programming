#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence of any byte from accept in s.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the found byte, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a && *a != *s)
a++;
if (*a)
return (s);
s++;
}
return (NULL);
}
