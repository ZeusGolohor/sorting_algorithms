#include "sort.h"

/**
 * insertion_sort_list - Uses insertion sort to sort
 * doubly linked list.
 * @list: Pointer to the first node.
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp, *key;

	if (list != NULL)
	{
		head = *list;
		while (head != NULL)
		{
			key = head->next;
			if (head->next != NULL)
			{
				temp = head;
				while (temp != NULL)
				{
					if (temp->n > key->n)
					{
						swap(list, temp, key);
						print_list(*list);
					}
					temp = temp->prev;
				}
			}
			head = key;
		}
	}
}

/**
* swap - Used to switch two nodes.
* @list: Pointer to the first node.
* @temp: Node to be swapped to the right.
* @key: Node to be swapped to the right.
* Return: void.
*/
void swap(listint_t **list, listint_t *temp, listint_t *key)
{
	if ((temp->prev == NULL) && (key->next == NULL))
	{
		key->next = temp;
		key->prev = NULL;
		temp->prev = key;
		temp->next = NULL;
		*list = key;
	}
	else if ((temp->prev == NULL) && (key->prev->prev == NULL))
	{
		key->prev = NULL;
		key->next->prev = temp;
		temp->next = key->next;
		key->next = temp;
		temp->prev = key;
		*list = key;
	}
	else if (key->next == NULL)
	{
		temp->prev->next = temp->next;
		key->prev = temp->prev;
		key->next = temp;
		temp->next = NULL;
	}
	else if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
		temp->next = key->next;
		key->next->prev = temp;
		key->next = temp;
		key->prev = temp->prev;
		temp->prev = key;
	}
}

