#include "lists.h"

/**
 * free_listint2 - This function is for freeing a linked list
 * @head: Contains address to the adress to the list to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	/* Iterate through the linked list and free each node */
	else
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/* Then set the head pointer to NULL */
	*head = NULL;
}
