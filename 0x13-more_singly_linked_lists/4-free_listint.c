#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to the head of a listint_t
 * to free
 * Return:
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head; head = temp)
	{
		temp = head->next;
		free(head);
	}
}

