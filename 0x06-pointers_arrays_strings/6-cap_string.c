#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if @c is a separator, 0 otherwise.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i]; i++)
{
if (separators[i] == c)
{
return (1);
}
}
return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to capitalize.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *s)
{
char *ptr = s;
int new_word = 1;

while (*ptr)
{
if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr -= 32;
new_word = 0;
}
else if (is_separator(*ptr))
{
new_word = 1;
}
else
{
new_word = 0;
}
ptr++;
}

return (s);
}
