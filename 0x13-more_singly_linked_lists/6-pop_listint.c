#include "lists.h"

/**
 * pop_listint - This function deletes the head node data of a linked list
 * @head: Is a pointer to the first element of the linked list
 *
 * Return: The head node's data that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (head == NULL || *head == NULL)
		return (0);

	node_data = (*head)->n; /* Store the data to be deleted */
	temp = (*head)->next; /* Save the address of the next node */
	free(*head); /* Free the memory allocated to the head node */
	*head = temp; /* Assign the next node as the head */

	return (node_data);
}
