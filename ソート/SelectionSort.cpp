#include "SelectionSort.h"

void SelectionSort::Exec(int* array, int size)
{
	for (int step = 0; step < size - 1; step++)
	{
		int min_idx = step;
		for (int i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}

		int temp = array[min_idx];
		array[min_idx] = array[step];
		array[step] = temp;
	}
}
