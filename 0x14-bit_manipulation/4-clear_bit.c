#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: unsigned long int value.
 * @index: unsigned int value of index to set bit.
 *
 * Return: 1 if successful, -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
