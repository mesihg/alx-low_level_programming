#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the jump search algorithm
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL)
		return (-1);

	k = sqrt(size);
	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += k;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	j = j < size - 1 ? j : size - 1;
	for (; i < j && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
