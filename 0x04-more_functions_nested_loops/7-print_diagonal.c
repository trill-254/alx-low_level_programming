#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times
 * Return: Always 0
 */

void print_diagonal(int n)
{

int i, j;

if (n <= 0)
putchar('\n');

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
