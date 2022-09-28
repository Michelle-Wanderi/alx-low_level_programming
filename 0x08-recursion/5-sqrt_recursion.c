#include "main.h"

/**
 * _sqrt - aditional function
 * @a: int
 * @b: int
 * Return: int
 */
int _sqrt(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}
	else if ((a * a) > b)
	{
		return (-1);
	}

	return (_sqrt((a + 1), b));
}
/**
 * _sqrt_recursion - function that returns the natural square of a number
 * @n: int
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt(1, n));
}
