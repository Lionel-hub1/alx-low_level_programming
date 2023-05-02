#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the node at a certain index
 * @head: Is a pointer to the first node in the linked list
 * @index: Is the index of the node
 *
 * Return: The nth node of a listint_t linked list, or NULL if it fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *the_node = head;

	/* iterate through the list until the index is found or the end is reached */
	for (; the_node && i < index; i++, the_node = the_node->next)
		;

	/* return the_node if it exists, otherwise return NULL */
	return (the_node ? the_node : NULL);
}
