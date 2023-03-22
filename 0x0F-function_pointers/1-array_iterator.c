#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: array for itearatin
 * @size: size of the array
 * @action: pointer to action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
