#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This function add a new node at the end of the linked list
 *
 * @head: Is a double pointer to the head of the linked list
 * @str: Is the string to be added to the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate the string and assign to the new node */
	new_node->str = strdup(str);
	new_node->len = str_len; /* assign the length of the string to the new node */
	new_node->next = NULL; /* the new node is currently the last node */

	if (*head == NULL)
	{
		/* if the list is empty, set the new node as the head */
		*head = new_node;
		return (new_node);
	}

	/* traverse the list to find the last node */
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* and add it at the end of the list */
	last_node->next = new_node;

	return (new_node);
}
