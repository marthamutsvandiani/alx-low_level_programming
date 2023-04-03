#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * main -add_nodeint adds a new node at te beginning of a listing
 * @head -the start of lnked list
 * @n -the value to be added to the new list
 * Return : The value of new list or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}

