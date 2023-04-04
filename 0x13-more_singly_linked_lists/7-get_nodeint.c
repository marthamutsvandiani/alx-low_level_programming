#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * entry -Afunction that returns the nth node of a listint_t
 * @index-node index at 0
 * @head -Stores first address node
 * Return : Null if node does not exist otherwise nth node
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i  = 0;
		for (i = 0; i < index; i++)

		{
			if (head == NULL)
			return (NULL);

			head = head->next;

		}
	return (head);

}
