#include "qsort.h"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void quicksort(int *array, int low, int high)
{
	if (low < high)
	{
		int partitioningIndex = partition(array, low, high);

		quicksort(array, low, partitioningIndex - 1);
		quicksort(array, partitioningIndex + 1, high);
	}
	
}

void mqsort(int *array, int number_of_elements)
{
	quicksort(array, 0, number_of_elements - 1);
}
