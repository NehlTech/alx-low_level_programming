#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: unsigned long int value.
 *
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;
	unsigned int max_bits;
	unsigned int shifted;

	max_bits = sizeof(n) * 8;

	bit = 1;
	shifted = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shifted < max_bits && n >= bit)
	{
		bit = bit << 1;
		shifted++;
	}
	if (shifted < max_bits)
		bit = bit >> 1;
	while (bit)
	{
		if ((n & bit) > 0)
			_putchar('1');
		else
			_putchar('0');
		n -= bit;
		bit = bit >> 1;
	}
}
