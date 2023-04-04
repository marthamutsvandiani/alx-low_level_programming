#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Entry-delete the head node
 *@head -contains address of 1st node
 *@diff -Different node to replace the 1st node
 *@n -head data
 *@pop_listint -Deletes the head node of the listint list
 *Return :Head node data n
 */

int pop_listint(listint_t **head)
{
	listint_t *diff_head;
	int n = 0;

	if (head == NULL)
	{ return (0);

	}

	
		diff_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = diff_head;
		
	

	return (n);
}

