#include "sort.h"

/**
  * bubble_sort - A function for bubble sorting.
  * @array: The array to sorted.
  * @size: The size of the array.
  * Return: Always 0.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, value, dat = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (value = 0; value < size; value++)
		{
			if (array[value] > array[value + 1] && array[value + 1])
			{
			dat = array[value];
			array[value] = array[value + 1];
			array[index + 1] = dat;
			print_array(array, size);
			}
		}
}

