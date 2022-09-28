#include "main.h"
/* print_rev_recursion - Prints a string in reverse
 * @s - string to be printed 
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
