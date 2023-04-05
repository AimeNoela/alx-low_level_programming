#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the head of the lists_t
 * @n: the integer for the new nde to contain
 *
 * Return: if the function fail - NULL
 * otherwise - the adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
	}
}
