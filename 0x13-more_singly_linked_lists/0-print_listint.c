#include "lists.h"
#include <stdio.h>

/** print_listint - prints all the elements of a linked list
 * returns the number of nodes 
 * @h is a pointer 
 **/

size_t print_listint(const listint_t *h)

{

   size_t counter = 0;

   while(h)
      {

	printf("%d\n", h->n);
	counter++;
	h = h ->next;
	
      }

      return(counter);
}
