#include "main.h"

/**
 * array_range - creates an array of intgers
 * @min: Minumum value for array_range
 * @max: Maximum value for array_range
 *
 * Return: A pointer to the newly created array.
 * If @min > max, return NULL.
 * IF malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ar;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ar = malloc(sizeof(int) * len);
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ar[i] = min++;
	return (ar);
}
