#include <stdio.h>
#include "search.h"

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))


int main(int argc, char *argv[])
{
	//printf("This is my driver code\n");
	int arr[5] = {1, 3, 4, 10, 40};
	int x = 4;
	int n = NELEMS(arr);
#ifdef LINEAR_SEARCH

	int result = linear_search(arr, x,n);
#endif /* LINEAR_SEARCH*/
#ifdef BINARY_SEARCH
	int result = binary_search(arr,x,0,n-1);
#endif /* BINARY_SEARCH*/

	(result == -1)
		? printf("Element is not present in array\n")
		: printf("Element is present at index %d\n", result);
	return 0;
}