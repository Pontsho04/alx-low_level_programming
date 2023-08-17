#include "lists.h"

/**
 * sum_dlistint - return sum data of all the data (n)
 * of doubly linked list
 *
 * @head: head
 * Return: the sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
