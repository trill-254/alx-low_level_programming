#include<unlstd.h>

/*
 *_putchar - writes the character c to stdout
 *@C: The character to print
 *Return: Always success 1.
 *On error, -1 is returned,and error is set approriately.
 */

int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
