#include <stdio.h>
#include "sort.h"

/**
  * bubble_sort - A function for bubble sorting.
  * @array: The array to sorted.
  * @size: The size of the array.
  * Return: Always 0.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int aux = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
