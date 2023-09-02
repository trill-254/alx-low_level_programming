#include <stdio.h>
#include "main.h"

/**
 * count_arguments - Count the number of command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: The number of arguments (excluding the program name).
 */
int count_arguments(int argc, char *argv[])
{
(void)argv;
return (argc - 1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
printf("%d\n", count_arguments(argc, argv));
return (0);
}
