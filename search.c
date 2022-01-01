#include<stdio.h>
#include <search.h>

#ifdef LINEAR_SEARCH
int linear_search(int input_array[], int element,int array_size) //O (n)
{
	int i;
	printf("Length %d\n",array_size);
	for (i = 0; i < array_size; i++)
		if (input_array[i] == element)
			return i;
	return -1;
}
#endif /* LINEAR_SEARCH */
#ifdef BINARY_SEARCH

int binary_search(int input_array[], int element, int first_index , int second_index) //O(log n)
{
	if (second_index >= first_index){
		int mid_index = (first_index + (second_index - first_index)/2);

		if(input_array[mid_index] == element){
			return mid_index;
		}
		else if ( input_array[mid_index] > element){
			return binary_search(input_array,element,first_index, mid_index -1);
		}
		else
			return binary_search(input_array, element,  mid_index + 1, second_index);
	}
	return -1;

}
#endif