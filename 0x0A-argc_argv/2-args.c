#include <stdio.h>
#include "main.h"

/**
 * print_arguments - Print all arguments, one per line.
 * @argv: An array of strings containing the command-line arguments.
 */
void print_arguments(char *argv[])
{
int i = 0;

while (argv[i] != NULL)
{
printf("%s\n", argv[i]);
i++;
}
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
(void)argc;
print_arguments(argv);
return (0);
}
