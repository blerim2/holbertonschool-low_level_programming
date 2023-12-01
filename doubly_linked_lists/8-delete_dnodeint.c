#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!*head)
		return (-1);
	if (!index)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index; i++)
		temp = temp->next;
	if (!temp)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
