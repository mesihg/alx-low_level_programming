#include "search_algos.h"

/**
 * binary_search - searches a value in an array
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = low + (high - mid) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
