#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return (0);
        }
        str++;
    }
    return (1);
}

/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;
    int *result = calloc(len_result, sizeof(int));

    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    int i, j;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    int start = 0;
    while (start < len_result && result[start] == 0)
    {
        start++;
    }

    if (start == len_result)
    {
        _putchar('0');
    }
    else
    {
        for (i = start; i < len_result; i++)
        {
            _putchar(result[i] + '0');
        }
    }

    _putchar('\n');

    free(result);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
    {
        printf("Error\n");
        return (98);
    }

    multiply(num1, num2);

    return (0);
}
