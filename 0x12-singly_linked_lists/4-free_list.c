#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This function frees a linked list.
 * @head: Is a pointer to the beginning of the list.
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;  /* Temporary variable to store the next node to free */

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;  /* Store the next node before freeing node */
		free(head->str);  /* Free the string inside the current node */
		free(head);  /* Free the current node */
		head = temp;  /* Move to the next node */
	}
}

