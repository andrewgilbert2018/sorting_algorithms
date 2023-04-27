#include "sort.h"


/**
  * selection_sort - applying selection sort on a list of integers
  * @array: array be sorted
  * @size: size of the array to be sorted
  */


void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int m, t, i;

	for (a = 0; a < size; a++)
	{
		m = array[a];
		for (b = a + 1; b < size; b++)
		{
			if (m > array[b])
			{
				m = array[b];
				i = b;
			}
		}
		if (m != array[a])
		{
			t = array[a];
			array[a] = m;
			array[i] = t;
			print_array(array, size);
		}
	}
}
