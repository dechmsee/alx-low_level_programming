#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *mem_loc;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		mem_loc = (*head)->next;
		free(*head);
		*head = mem_loc;
	}
}
