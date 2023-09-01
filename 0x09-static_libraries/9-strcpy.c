#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Destination buffer where the string is copied.
 * @src: Source string to be copied.
 *
 * Return: Pointer to the destination string `dest`.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
