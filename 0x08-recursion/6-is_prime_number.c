

#include "main.h"
#include <stdio.h>

int counter(int x, int base);

/**
 * is_prime_number - tells if a number is a prime or not using another function
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (counter(2, n));
}
/**
 * counter - auxiliar function that call itself until find if a number is prime
 *  @x: int
 *  @base: int
 *  Return: 0 false,  1 true
 */
int counter(int x, int base)
{
	if (x == base)
	{
		return (1);
	}
	else if (base % x == 0)
	{
		return (0);
	}
	else
	{
		return (counter(x + 1, base));
	}
}
