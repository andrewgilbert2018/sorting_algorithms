#include "sort.h"

/**
  * bubble_sort - A function for bubble sorting.
  * @array: The array to sorted.
  * @size: The size of the array.
  * Return: Always 0.
  */
void bubble_sort(int *array, size_t size)
{
	size_t a = 0, b = 0;
	int r = 0;

	if (array == NULL || size == 0)
		return;
	for (; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				r = array[b + 1];
				array[b + 1] = array[b];
				array[b] = aux;
				print_array(array, size);
			}
		}
	}
}
