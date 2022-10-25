#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h != 0)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			num++;
		}
		if (h->next != NULL)
		{
			printf("%d\n", h->n);
			num++;
		}
		h = h->next;
	}

	return (num);
}
