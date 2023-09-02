#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_integer - Check if a string represents a positive integer.
 * @str: The string to check.
 * Return: 1 if it's a positive integer, 0 otherwise.
 */
int is_positive_integer(char *str)
{
int i = 0;

if (str == NULL || str[0] == '\0')
return (0);

while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * add_positive_numbers - Add positive numbers from command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: The sum of positive numbers or 0 if no positive numbers  provided.
 */
int add_positive_numbers(int argc, char *argv[])
{
int sum = 0;
int i;

for (i = 1; i < argc; i++)
{
if (is_positive_integer(argv[i]))
{
int num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

return (sum);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
int result;

if (argc == 1)
{
printf("0\n");
return (0);
}

result = add_positive_numbers(argc, argv);

if (result != 0)
printf("%d\n", result);

return (result != 0);
}
