#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *s)
{
char leet_map[10] = {'o', 'l', '\0', 'e', 'a', '\0', 't', '\0', 'L', '\0'};
int i, j;
char *ptr = s;

while (*ptr)
{
i = 0;
j = 0;

while (i < 10)
{
if (*ptr == leet_map[i] || *ptr == leet_map[i] - 32)
{
char LeetReplace[10] = {'0', '1', '\0', '3', '4', '\0', '7', '\0', '7', '\0'};
*ptr = LeetReplace[j];
break;
}
i++;
j++;
}

ptr++;
}

return (s);
}
