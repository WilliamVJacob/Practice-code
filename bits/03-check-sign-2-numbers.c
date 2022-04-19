#include<stdio.h>
#define CHECK_SIGN(X,Y) ((X ^ Y ) & (1 << ((8*sizeof(int)) - 1))) 
#define CHECK_SIGN1(X,Y) ((X ^ Y)< 0)
int main()
{
    int num1=0;
    int num2=0;
    int sign = 0;
    printf("enter a number 1 and number 2\n");
    scanf("%d%d",&num1,&num2);
    sign = CHECK_SIGN1(num1,num2);
    if((sign == 0) && ((num1 != 0 )|| (num2 != 0))){
        printf("sign is same\n");
    }
    else
    {
        printf("sign is different\n");
    }
}
