#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A'); /* Convert to uppercase */
}
ptr++;
}

return (str);
}
