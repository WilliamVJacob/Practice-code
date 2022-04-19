#include<stdio.h>
#define CHECK_SIGN(input) (input &(1 << ((sizeof(int) * 8) - 1)))
int main(int argc , char *argv[]){
    int input = 0;
    int sign = 0;
    printf("Enter the number \n");
    scanf("%d",&input);
   //sign = input >> ((sizeof(int)*8)-1 );
  // sign = input & (1 << ((sizeof(int)*8)-1 ));
    sign = CHECK_SIGN(input);
        // printf("%x %x", sign, (1 << ((sizeof(int) * 8) - 1)));
        if (0x80000000 == sign)
    {
        printf("number is negative\n");

    }
    else if( 0 == input)   
    {
        printf("number is zero\n");
    }
    else if (0 == sign)
    {
        printf("number is positive\n");
    }
}