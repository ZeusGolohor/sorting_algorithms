#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
void bubble_sort(int *, size_t);
void print_list(const listint_t *);
void print_array(const int *, size_t);
void array_swap(int *, int, int);
void insertion_sort_list(listint_t **);
void swap(listint_t **, listint_t *, listint_t *);
void selection_sort(int *, size_t);
void quick_sort(int *, size_t);
void quickSort(int *, size_t, size_t, size_t);
size_t partition(int *, size_t, size_t, size_t);
void swap2(int *, size_t, size_t, size_t);
#endif
