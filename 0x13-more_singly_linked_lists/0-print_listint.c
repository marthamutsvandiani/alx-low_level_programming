#include <stdio.h>
#include "lists.h"

/**
 * main -Printing all elements of a listint_t list
 * @h:This is a pointer to the head/start of list node
 * Return : The number of Nodes in the list
 */
 
size_t print_listint(const listint_t *h)
{
	int total = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
		        total++;
		}
	}

	return (total);
}
