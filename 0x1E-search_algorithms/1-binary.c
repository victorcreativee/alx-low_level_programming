#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Print the elements of an array
 * @array: Pointer to the first element of the array
 * @left:  Starting index of the left
 * @right: Starting index of the right
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches a value in an array using linear search
 * @array: Pointer to the first element of the array
 * @size:  Number of elements in array
 * @value: value to search in an array
 * Return: Value if it is present while it is not retuen -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);
	
	left = 0;
	right = size -1;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
