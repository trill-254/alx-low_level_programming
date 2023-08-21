#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse,
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
int start = 0;

while (s[start])
	start++;
while (start--)
	putchar(s[start]);
		putchar('\n');
}
