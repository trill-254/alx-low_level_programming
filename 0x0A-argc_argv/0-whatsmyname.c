#include <stdio.h>
#include "main.h"

/**
 * print_program_name - Print the program's name from argv
 * @argv: The argument vector (including the program name)
 */
void print_program_name(char *argv[])
{
if (argv[0])
{
printf("%s\n", argv[0]);
}
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc; /* Suppress unused parameter warning */
print_program_name(argv);
return (0);
}
