#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	for (; *head != NULL; *head = temp)
	{
		temp = (*head)->next;
		free(*head);
	}
	*head = NULL;
}
