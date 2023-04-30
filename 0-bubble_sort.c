#include "sort.h"

/**
 * bubble_sort - using bubble sort to sort array of integers
 * @array: Array to sort
 * @size: size of the array
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b, res = size;
	int tmp, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size; a++)
	{
		for (b = 1; b < res; b++)
		{
			if (array[b - 1] > array[b])
			{
				flag = 1;
				tmp = array[b];
				array[b] = array[b - 1];
				array[b - 1] = tmp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		res--;
	}
}

