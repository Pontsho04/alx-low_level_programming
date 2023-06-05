#include "lists.h"

/**
 * add_nodeint - add new note at the beginning of linked list
 * @n: data
 * @head: pointer
 * Return: pointer to new node, NULL if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

		new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
		*head = new;

		return (new);
}
