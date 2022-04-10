#include <stdio.h>
#include "search.h"
#include "sort.h"

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

void print_array(int input_array[], int array_size)
{
	int i;
	printf("Array's contents are \n");
	for (i = 0; i < array_size; i++)
		printf("%d ", input_array[i]);
	printf("\n");
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}



void heap_overflow()
{	// to demonstrate heap overflow
	for (int i = 0; i < 1000000000; i++)
	{
		// Allocating memory without freeing it
		int *ptr = (int *)malloc(sizeof(int));
	}
}

int main(int argc, char *argv[])
{
	//printf("This is my driver code\n");
	int arr[5] = {5,4,3,2,1};
	int x = 4;
	int n = NELEMS(arr);
	heap_overflow();
#ifdef SELECTION_SORT
	selection_sort(arr,n);

#endif /*SELECTION_SORT */

#ifdef BUBBLE_SORT
	bubble_sort(arr,n);
#endif /*BUBBLE_SORT */

#ifdef INSERTION_SORT
	insertion_sort(arr,n);
#endif /* INSERTION_SORT*/
#ifdef LINEAR_SEARCH

	int result = linear_search(arr, x,n);
#endif /* LINEAR_SEARCH*/
#ifdef BINARY_SEARCH
	int result = binary_search(arr,x,0,n-1);


	(result == -1)
		? printf("Element is not present in array\n")
		: printf("Element is present at index %d\n", result);
#endif /* BINARY_SEARCH*/
	return 0;
}