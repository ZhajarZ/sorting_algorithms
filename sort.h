#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

#define UP 0
#define DOWN 1

typedef enum bool
{
	false = 0,
	true
} bool;

void bubble_sort(int *array, size_t size);


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
#endif /* SORT_H */
