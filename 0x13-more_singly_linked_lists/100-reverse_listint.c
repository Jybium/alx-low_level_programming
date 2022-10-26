#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the head of the linked list
 * Return: a pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead;
	listint_t *behind;

	ahead = NULL;
	behind = NULL;

	while (*head)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	*head = behind;
	return (*head);
}
