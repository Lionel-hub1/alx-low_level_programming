#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		/* Store the next node before freeing the current one */
		temp = head->next;
		free(head);/* Free current node */
		head = temp;/* Then go to the next*/
	}
}
