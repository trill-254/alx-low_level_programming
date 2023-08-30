#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 *
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n. If n is negative, returns -1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); /* Return -1 to indicate an error for negative numbers */
}
else if (n == 0)
{
return (1); /* Base case: factorial of 0 is 1 */
}
else
{
return (n * factorial(n - 1)); /* Recursively calculate the factorial */
}
}
