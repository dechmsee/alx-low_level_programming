#include "main.h"

/**
* array_range - Allocates memory using malloc.
* @min: Minimum Value
* @max: Maximum Value
* Return: Pointer to the new allocated memory.
**/

int *array_range(int min, int max)
{

	int *ptr;
	int i, subs;

	if (min > max)
	return (NULL);
	subs = max - min;
	ptr = malloc((subs + 1) * sizeof(int));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i <= subs; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
