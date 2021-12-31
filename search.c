#include<stdio.h>
#include <search.h>
//define LINEAR_SEARCH

#ifdef LINEAR_SEARCH
int linear_search(int input_array[], int element,int array_size)
{
	int i;
	printf("Length %d\n",array_size);
	for (i = 0; i < array_size; i++)
		if (input_array[i] == element)
			return i;
	return -1;
}
#endif /* LINEAR_SEARCH */

