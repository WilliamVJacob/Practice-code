#include <stdio.h>
#include <sort.h>

#ifdef SELECTION_SORT
int selection_sort(int input_array[], int array_size) //O(n2)
{

    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < array_size - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < array_size; j++)
            if (input_array[j] < input_array[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&input_array[min_idx], &input_array[i]);
    }
    return 0;
}

#endif /*SELECTION_SORT */
#ifdef BUBBLE_SORT

int bubble_sort(int input_array[], int array_size) // O(n^2)
{
    int i, j;
    for (i = 0; i < array_size - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < array_size - i - 1; j++)
            if (input_array[j] > input_array[j + 1])
                swap(&input_array[j], &input_array[j + 1]);
    print_array(input_array, array_size);
}
#endif /* BUBBLE_SORT*/