#include <stdio.h>
int main()
{
    int input = 0;
    int sign = 0;
    printf("Enter the number \n");
    scanf("%d", &input);
    sign = (input != 0 && input != 1) && !(input & (input - 1));
    if( sign == 1){
        printf("Number is  multiple of 2\n");
    }
    else
        printf("Number is  not multiple of 2\n");
    
    return 0;
}