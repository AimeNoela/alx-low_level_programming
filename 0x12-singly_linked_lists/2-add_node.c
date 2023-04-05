#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: the string added to the list_t list
 *
 * Return: if the function fail - NULL
 * otherwise - the adress of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
