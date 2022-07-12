/**
 * _abs - Entry point
 * returns the absolute value of n.
 * @n: an integer to convert into an absolute number.
 * Return: the absolute value of n (Success)
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
