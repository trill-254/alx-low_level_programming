#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to calculate the square root for.
 *
 * Return: The square root of n or -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Recursively finds the natural square root of a number.
 *
 * @n: The number to calculate the square root for.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n or -1.
 */
int find_sqrt(int n, int guess)
{
if (guess * guess > n)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
return (find_sqrt(n, guess + 1));
}
