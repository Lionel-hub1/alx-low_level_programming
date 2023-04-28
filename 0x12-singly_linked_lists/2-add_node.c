#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a linked list
 *
 * @head: Is a double pointer to the head of the linked list
 * @str: Is the string to be added to the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	/* Compute the length of the new string */
	while (str[len])
	{
		len++;
	}

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str); /* Copy the new string to the new node */
	new_node->len = len; /* Set the length of the new node */
	new_node->next = *head; /* Link the new node to the existing list */
	*head = new_node; /* Update the head of the list */

	return (new_node);
}
