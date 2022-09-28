#include "main.h"

int pal_length(char *s, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that define is a string is a palindrome.
 * @s: char pointer
 * @s: char pointer
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}
	return (pal_length(s, length));
}

