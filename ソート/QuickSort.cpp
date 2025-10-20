#include "QuickSort.h"

static void Swap(int* array, int* size) {
	int temp = *array;
	*array = *size;
	*size = temp;
}

static void QuickSortMain(int A[], int left, int right)
{
	int Left, Right;
	int pivot;

	Left = left;
	Right = right;

	pivot = A[(left + right) / 2];

	while (1) {

		while (A[Left] < pivot) Left++;

		while (pivot < A[Right]) Right--;

		if (Left >= Right) break;

		Swap(&A[Left], &A[Right]);

		Left++;
		Right--;
	}

	if (left < Left - 1) QuickSortMain(A, left, Left - 1);

	if (Right + 1 < right) QuickSortMain(A, Right + 1, right);
}

void QuickSort::Exec(int* array, int size)
{
	if (array == nullptr || size <= 1) return;
	QuickSortMain(array, 0, size - 1);
}
