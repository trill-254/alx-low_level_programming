#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: The first number to be swapped.
 * @b: The second number to swapped.
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
