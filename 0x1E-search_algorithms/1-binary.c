/*
 * File: 1-binary.c
 * Auth: Bright
 */

#include <stdio.h>
#include "search_algos.h"

/**
 * printArray - prints subarray being evaluated
 * @array: array being inspected
 * @l: left index of array to print
 * @r: right index of array to print
 */
void printArray(int *array, size_t l, size_t r)
{
	size_t a;

	array = array;

	printf("Searching in array: ");
	for (a = l; a <= r; a++)
	{
		if (a != l)
			printf(", ");
		printf("%d", array[a]);
	}
	printf("\n");
}

/**
 * binary_search - search for value in sorted array of int using Binary Search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: data to search for
 * Return: index of found value or -1 if value is not found or empty array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if ((size < 1) || (array == NULL))
		return (-1);
	while (l <= r)
	{
		printArray(array, l, r);
		m = ((l + r) / 2);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m;
		if ((l == r) && (value < array[0]))
			return (-1);
	}
	return (-1);
}
