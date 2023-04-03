#include <stdio.h>
#include "lists.h"

/**
 * main- @listint_len -Counts the elements in a linked list
 * @h :The head of the linked list
 * Returns : The number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int total = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			total++;
		}
	}

	return (total);
}

