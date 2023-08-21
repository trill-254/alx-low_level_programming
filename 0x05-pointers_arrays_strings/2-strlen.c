#include "main.h"
#include <stdio.h>

/**
 *  _strlen - Returns the length of a string.
 *  @s: The string to be checked
 *  Return: The length of the string
 */

int _strlen(char *s)
{

int string_length = 0;

while (s[string_length])
	string_length++;
return (string_length);
}
