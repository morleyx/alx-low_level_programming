#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer
 * @max: last integer
 *
 * Return: A pointer to newly allocated memory, NULL on failure
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
