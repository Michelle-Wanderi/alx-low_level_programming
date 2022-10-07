#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(sizeof(char) * total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
