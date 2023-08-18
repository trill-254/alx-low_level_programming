#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times
 * Return: Always  0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	putchar('_');
	}
	putchar('\n');
}
