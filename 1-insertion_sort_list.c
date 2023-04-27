#include "sort.h"

/**
 * insertion_sort_list - sort a list of integer
 * @list: pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *rec = NULL;
	listint_t *insert = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	rec = (*list)->next;
	insert = rec->prev;
	while (rec != NULL)
	{
		insert = rec->prev;
		while (insert != NULL && insert->n > rec->n)
		{
			move_left(rec, insert, list);
			insert = rec->prev;
		}
		rec = rec->next;
	}
}
/**
* move_left - swaps two members of a list
*
* @rec: recent node to be moved at left of insertion
* @insert: insertion pointer
* @head: head of list
*/
void move_left(listint_t *rec, listint_t *insert, listint_t **head)
{
	listint_t *chg1 = rec->next;
	listint_t *chg2 = insert->prev;

	if (chg1 != NULL)
		chg1->prev = insertion;
	if (chg2 != NULL)
		chg2->next = rec;
	rec->prev = chg2;
	insert->next = chg1;
	rec->next = insert;
	insert->prev = rec;
	if (*head == insert)
		*head = rec;
	print_list(*head);
}


