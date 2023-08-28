#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of characters to accept.
 *
 * Return: Number of bytes in the initial segment of s consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
	found = 0;
	while (*accept)
	{
	if (*s == *accept)
	{
	count++;
	found = 1;
	break;
	}
	accept++;
	}
	if (found == 0)
	{
	break;
	}
	s++;
	accept = accept - (found ? count : 0);
	}

	return (count);
}
