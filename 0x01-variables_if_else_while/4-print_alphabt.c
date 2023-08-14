#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Displays the entire alphabet excluding the letters q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz"
	int i;

	for (i = 24; i < 40; i++)
	{
		if (i != 28 && i != 35)
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
