/**
 * _strspn - searches string for a set of bytes
 * @s: segment to get bytes of for unique instances.
 * @accept: valid segment indicator.
 * Return: number of unique instances
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter, checker;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		checker = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				checker = 1;
			}
		}
		if (checker == 0)
			return (counter);
	}
	return (counter);
}
