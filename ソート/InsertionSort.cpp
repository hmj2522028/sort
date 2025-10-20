#include "InsertionSort.h"

void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (array[j - 1] < array[j])
				break;
			Swap(array[j - 1], array[j]);
		}
	}
}