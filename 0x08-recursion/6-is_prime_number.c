#include "main.h"

int check_prime(int n, int divisor);

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: The number to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (check_prime(n, 2));
}

/**
 * check_prime - Recursively checks if a number is prime.
 *
 * @n: The number to check.
 * @divisor: The divisor to check divisibility with.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int check_prime(int n, int divisor)
{
if (divisor == n)
{
return (1);
}
if (n % divisor == 0)

return (0);
}

return (check_prime(n, divisor + 1));
}
