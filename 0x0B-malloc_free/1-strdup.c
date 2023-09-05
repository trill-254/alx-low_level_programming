#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly allocated duplicated string
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[length])
length++;

duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
