#include "lists.h"

/**
 * print_listint - This function traverses a linked list and print each element
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL) /* Traverse the linked list until the end is reached */
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		nodes++; /* Nodes count increases */
		h = h->next; /* Move on the next*/
	}

	return (nodes);
}
