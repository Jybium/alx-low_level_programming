#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: a pointer to the address of the head of the listint_t
 * Description: sets the head to NULL
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
