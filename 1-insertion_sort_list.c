#include "sort.h"

void swtch(listint_t **head, listint_t *nd0, listint_t *nd1);
/**
 * insertion_sort_list - sorts a list with insertion sort
 * @list: list to be sorted
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *f, *t;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (f = (*list)->next; f && f->prev; f = f->next)
	{
		for (; f && f->prev && f->n < f->prev->n;
		     f = f->prev)
		{
			t = f->prev;
			swtch(list, t, f);
			print_list(*list);
			f = f->next;
		}
	}
}

/**
 * swtch - swtch nodes
 * @head: the head node
 * @nd0: the 1st node
 * @nd1: the 2nd node
 *
 * Return: Always 0
 */
void swtch(listint_t **head, listint_t *nd0, listint_t *nd1)
{
	listint_t *prev, *next;

	prev = nd0->prev;
	next = nd1->next;

	if (prev != NULL)
		prev->next = nd1;
	else
		*head = nd1;
	nd0->prev = nd1;
	nd0->next = next;
	nd1->prev = prev;
	nd1->next = nd0;
	if (next)
		next->prev = nd0;
}
