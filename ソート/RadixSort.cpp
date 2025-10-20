#include "RadixSort.h"
#include <vector>
#include <algorithm>

static int GetMax(int* array, int size)
{
	int maxVal = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > maxVal)
			maxVal = array[i];
	}
	return maxVal;
}

void RadixSort::Exec(int* array, int size)
{
	if (size <= 1) return;

	int maxVal = GetMax(array, size);

	for (int exp = 1; maxVal / exp > 0; exp *= 10)
	{
		std::vector<int> output(size);
		int count[10] = { 0 };

		for (int i = 0; i < size; i++)
		{
			int digit = (array[i] / exp) % 10;
			count[digit]++;
		}

		for (int i = 1; i < 10; i++)
		{
			count[i] += count[i - 1];
		}

		for (int i = size - 1; i >= 0; i--)
		{
			int digit = (array[i] / exp) % 10;
			output[count[digit] - 1] = array[i];
			count[digit]--;
		}

		for (int i = 0; i < size; i++)
		{
			array[i] = output[i];
		}
	}
}
