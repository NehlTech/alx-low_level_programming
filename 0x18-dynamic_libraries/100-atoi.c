#include "main.h"

/**
 * _atoi - converts an array to an int
 * @s: string to convert.
 * Return: converted int or 0 if not ints.
 */
int _atoi(char *s)
{
	int i, neg;
	unsigned int total;

	total = 0;
	neg = 1;
	if (s[0] == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (total > 0 && (s[i] > 57 || s[i] < 48))
			break;
		if (s[i] == 45)
			neg = neg * -1;
		if (s[i] <= 57 && s[i] >= 48)
			total = total * 10 + s[i] - 48;
	}
	if (neg < 0)
		return (total = total * -1);
	else
		return (total);
}
