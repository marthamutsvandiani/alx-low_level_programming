#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Entry -A Function inserting a new node at a given position
 * @head -start of node
 * @idx -index of the list where new node is added
 * @n -the integer for the new node
 * @i -node
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *other, *copy = *head;
	unsigned int i;

	other  = malloc(sizeof(listint_t));

	if (other == NULL)

	{
	return (NULL);
	}

	 other->n =  n;

	if (idx == 0)
	 {
		 other->next = copy;
		 *head = other;
	return (other);
	 }
	 for (i = 0; i < (idx - 1); i++)
	 {
	if (copy == NULL || copy->next == NULL)
		 {
			 return (NULL);
		 }
	 copy = copy->next;
	 }

	 other->next = copy->next;
	copy->next = other;

	return (other);
}


