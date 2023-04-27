#include "lists.h"

/**
 * list_len - This function counts the number of nodes in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* Loop through each node in the list and increment for each     */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
