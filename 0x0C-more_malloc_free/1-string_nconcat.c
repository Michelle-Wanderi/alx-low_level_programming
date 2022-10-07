#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of s2
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c1 = 0;
	unsigned int c2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		c1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		c2++;
		j++;
	}
	if (c2 > n)
		c2 = n;
	str = malloc(sizeof(char) * (c1 + c2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < c2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[c1 + c2] = '\0';
	return (str);
}
