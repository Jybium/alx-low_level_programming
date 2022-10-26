#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: a pointer to the address of the listint_t list
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
