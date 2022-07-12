/**
 * _islower - Entry point
 * @c: to tell if the input is a lowercase character or not.
 * Return: 1 if it is a lowercase character(Success) 0 if failure
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
