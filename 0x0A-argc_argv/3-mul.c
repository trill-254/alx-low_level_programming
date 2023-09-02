#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - Multiply two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The result of the multiplication.
 */
int multiply(int a, int b)
{
return (a * b);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = multiply(num1, num2);

printf("%d\n", result);

return (0);
}
