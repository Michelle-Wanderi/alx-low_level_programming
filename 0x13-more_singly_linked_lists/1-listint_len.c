#include "lists.h"
/** 
* listint_len - Returns number of elements in a linked list
* @h - linked list of type listint_t
* Returns the number of elements 
**/

size_t listint_len(const listint_t *h);

   size_t countElements = 0;
	
{

 while(h)
{

                countElements++;
		numElements++;
		h = h->next;
	}

	return (numElements);
}

 
