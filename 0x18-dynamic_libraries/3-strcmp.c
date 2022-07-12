/**
 * _strcmp - compares two strings.
 * @s1: first string in comparison
 * @s2: second string in comparison
 * Return: (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i, total;

	total = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (total = s1[i] - s2[i]);
	return (total);
}
