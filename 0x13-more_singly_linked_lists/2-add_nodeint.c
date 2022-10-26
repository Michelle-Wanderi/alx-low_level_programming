#include "lists.h"

/** add_nodeint - adds a new node at the beginning of a linked list
* returns the address of the new element or NULL if it failed
**/

listint_t *add_nodeint(listint_t **head, const int n);
{
  listint_t *newNode;

  newNode = NULL;
  newNode = malloc(sizeof(listint_t);
  if(newNode == NULL)
     return (NULL);
     
  newNode -> = n;
  newNode ->next = *head;
 *head = newNode;

  return (newNode);
}
