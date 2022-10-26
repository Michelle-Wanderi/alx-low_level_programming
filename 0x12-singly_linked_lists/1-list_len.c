#include "lists.h"
#include "strdup.h"

/** add_node - adds a new node at he beginning of a list_t list
 * returns the address of the new element
 * str needs to be duplicated
**/
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len]; )
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
