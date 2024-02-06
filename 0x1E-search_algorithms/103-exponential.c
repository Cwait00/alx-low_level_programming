#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted
 * array using exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	size_t bound = 1;

	while (bound < size && array[bound] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}

	size_t left = bound / 2;
	size_t right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search(array, left, right, value));
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
	size_t mid = (low + high) / 2;

	printf("Searching in array: ");
	print_subarray(array, low, high);

	if (array[mid] == value)
	return (mid);
	else if (array[mid] < value)
	low = mid + 1;
	else
	high = mid - 1;
	}

	return (-1);
}

/**
 * print_subarray - Prints the elements of a subarray
 * @array: Pointer to the first element of the array
 * @low: Lower bound of the subarray
 * @high: Upper bound of the subarray
 */
void print_subarray(int *array, size_t low, size_t high)
{
	printf("%d", array[low]);
	for (size_t i = low + 1; i <= high; ++i)
	printf(", %d", array[i]);
	printf("\n\n");
}
