#include "main.h"
#include <stdio.h>
/* int factorial returns the factorial of a given number
 * if n is lower than zero then -1 is returned to indicate an error
 */

int factorial(int n);
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	return (n * factorial(n - 1));
}
