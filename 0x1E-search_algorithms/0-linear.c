/*
 * File: 0-linear.c
 * Auth: Bright
 */

#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: data to search for
 * Return: index of found value or -1 if value is not found or empty array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = -1;

	if ((size == 0) || (array == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
