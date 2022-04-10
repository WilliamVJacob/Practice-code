#include <stdio.h>
int SumOfElements(int a[],int size){ //int a[] == int * a; for array there  is not call by value only reference // a is pointer to integer here 
    int i , sum = 0;
     a[0]=15;
    int size1 = sizeof(a) / sizeof(a[0]);
    printf(" sizeof(a) %d sizeof(a[0] %d\n", sizeof(a), sizeof(a[0]));

        for (i = 0; i < size1; i++)
            sum += a[i];
    return sum;
}
int main()
{ 
    int a[]={2,4,6,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    int total = SumOfElements(a,size); //a can be used for &a[0 ]
    printf("total = %d a0 %d\n",total, a[0]);
    //printf("sizeof %d\n",sizeof(int *));
}