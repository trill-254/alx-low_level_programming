#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];          /* Sum of the main diagonal */
sum2 += a[i * size + (size - 1 - i)];  /* Sum of the secondary diagonal */
}

printf("%d, %d\n", sum1, sum2);
}
