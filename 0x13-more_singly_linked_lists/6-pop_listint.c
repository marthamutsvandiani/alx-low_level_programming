#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Entry-delete the head node
 *@head -contains address of 1st node
 *@diff -Different node to replace the 1st node
 *@n -head data
 *Return :Head node data n
 */

int pop_listint(listint_t **head)
{
	listint_t *diff_head;
	int n = 0;

	if (head != NULL)
	{
		diff_head = (*head)->next;
		n = (*head)->n;
		*head = diff_head;
		free(*head);
	}

	return (n);
}

