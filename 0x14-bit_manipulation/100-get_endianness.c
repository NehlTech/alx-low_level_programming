#include "main.h"

/**
 * get_endianness - Checks if the machine is storing data as little endian or
 * big endian. By setting an unsigned int to 1 and checking if the first byte
 * is 0 (for big endian), else it must be 1 (little endian).
 *
 * Return: 1 for little endian. 0 for big endian.
 */

int get_endianness(void)
{
	unsigned int n;
	char *c = (char *) &n;

	n = 1;
	if (*c)
		return (1);
	else
		return (0);
}
