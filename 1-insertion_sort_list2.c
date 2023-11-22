#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *tmp, *l1, *l2, *next, *prev;

	if (*list != NULL)
	{
		head = *list;
		while (head != NULL)
		{
			head = *list;
			l1 = head;
			l2 = l1->next;
			if ((l1->prev == NULL) && (l1->n > l1->n))
			{
				l1->next->prev = l1;
				l1->next = l2->next;
				l1->prev = l2;
				l2->next = l1;
				l2->prev = NULL;
				*list = l2;
/** 				print_list(*list);**/
				exit(0);
			}
			else
				head = head->next;
		}
	}
}
