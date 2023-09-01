#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
return ((_islower(c) || _isupper(c)) ? 1 : 0);
}
