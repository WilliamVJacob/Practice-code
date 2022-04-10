#include <stdio.h>

int main()
{
    // an array with 3 rows and 2 columns.
    int x[2][3] = {{0, 1 ,2}, {3,4, 5}};

    // output each array element's value
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf( "Element at x[%d][%d] is %d\n",i,j,x) ;   // x[i][j] = value x[i] = address of x= address 
        }
    }
    int*p=x;

    return 0;
}