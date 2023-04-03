#include <stdio.h>
#include "lists.h"

/**
 * main -add_nodeint adds a new node at te beginning of a listing
 * @head -the start of lnked list
 * @n -the alue to be added to the new list
 * Return : The value of new list or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_lists;

	if (head != NULL)
	{new_lists = malloc(sizeof(listint_t));
		if (new_lists == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_lists;

		return (new_list);
	}
	return (NULL);
}

