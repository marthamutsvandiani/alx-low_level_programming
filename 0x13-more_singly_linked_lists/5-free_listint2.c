#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Entry- Frees a listint_t list
 *@head -start of node
 *@next -next node
 *@temporary -temborary list
 *Return : NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
{
		return;
}

		while (*head != NULL)

	{
		temporary = (*head);
		*head = (*head)->next;
		free(temporary);
	}

		*head = NULL;
}



