#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - struct listint_s
 *
 * @n: n
 * @index: index
 * @next: next
 *
 * Description: singly linked list node
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - struct skiplist_s
 *
 * @n: n
 * @index: index
 * @next: next
 * @express: express
 *
 * Description: singly linked list structure
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int bs(int *array, int start, int end, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size);
skiplist_t *create_skiplist(int *array, size_t size);
skiplist_t *linear_skip(skiplist_t *list, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
