#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Entry-a function that fees a listint_t list
 * @temporary -the temporary listing to be freed
 * @head -the start of the node
 * @listint_t - represent a singly linked list of integers
 * @next -represents the next node
 * Return : Nothing
 */

void free_listint(listint_t *head);
{
	listint_t *temporary;

	while (head)
	{
		temorary = head;
		head = head->next;
		free(temporary);
	}
	free(head);

}


