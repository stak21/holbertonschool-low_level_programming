#include "sort.h"

/**
 * shell_sort - Sorts an array of integer using shell sort
 * @array: Holds an array of integers
 * @size: The size of the array
 */

void shell_sort(int *array, size_t size);
void swap(int *array, int idx1, int idx2);
void shell_sort(int *array, size_t size)
{
	/* iterates through the array in multiples of n, which is determined by
	 * knuth algorithm (n * 3) + 1 < size
	 * Each pass has the gap from highest gap to lowest
	 * swaps are a normal swap
	 */

	size_t i = 0;
	size_t n = 1;

	while (n < size)
	{
		n = (n * 3) + 1;
		i += 1;
	}
	n = (n - 1) / 3;
	while (n > 0)
	{
		i = 0;
		/* create a sublist interval of n and insert sort them*/
		while (i + n < size)
		{
			printf("%i, %i\n", array[i], array[i + n]);
			if (array[i] > array[i + n])
				swap(array, i, i + n);
			i += 1;
		}
		print_array(array, size);
		while (i - n > 0)
		{
			i -= 1;
			printf("%i, %i\n", array[i], array[i - n]);
			if (array[i] < array[i - n])
				swap(array, i, i - n);

		}
		print_array(array, size);
		printf("----\n");
		n = (n - 1) / 3;
		printf("%lu\n", n);
	}

		
}

/**
 * swap - swaps two elements in an array
 * @array: The array to work on
 * @idx1: the index of the element to swap
 * @idx2: The index of the element to swap
 */

void swap(int *array, int idx1, int idx2)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}

int main(void)
{
	int arr[10] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	print_array(arr, 10);
	shell_sort(arr, 10);
	print_array(arr, 10);
	return (0);
}
