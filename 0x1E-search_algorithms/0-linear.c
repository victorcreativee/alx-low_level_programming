#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search -Searches a value in an array using linear search
 * @array: Pointer to the first element of the array
 * @size:  Number of elements in array
 * @value: value to search in an array
 * Return: Value if it is present while it is not retuen -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
