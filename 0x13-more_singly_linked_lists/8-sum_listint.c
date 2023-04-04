#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Entry-Afunction that returns the sum of all the data in linked lists
 * @n -data in the linked lists
 * @head -start of the node
 * Returns : 0 if list is empty otherwise sum
 *@sum_listint -calculates the sum of data in linked lists
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
	head = head->next;
	}

	return (total);

}

