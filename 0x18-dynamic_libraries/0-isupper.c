#include "main.h"

/**
 * _isupper - checks to see if a character is uppercase
 * @c: integer to check
 * Return: 1 if yes, 0 if no (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
