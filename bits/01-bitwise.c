#include<stdio.h>
#include<math.h>
#if OPTION_1
 void display_bits(int num)
 {
    int rem = 0 ;
    unsigned long long out = 0;
    unsigned long long pos = 1;
    int temp = num ;
    while (temp)
    {
        rem = temp % 2;
        temp /=2;
        out += rem * pos;
        pos*=10;
        printf("rem = %d pos = %d out = %d\n", rem, pos, out);
    }
    printf("out = %d\n",out);
}
#endif

void display_bits(int num)
{
    int rem = 0;
    for (int i = 0 ; i< sizeof(num) * 8 ; i++){
        rem = num%2 ;
        rem = rem >> 31 - i

        //num /= 2;
       // if (1 ==rem){
         //   printf("1");
        }
        else
            printf("0");
        num = num >> 1;
        
    }
}
    int main()
{
    int num1, num2;
    //scanf("%x%x",&num1,&num2);
    scanf("%x",&num1);
    
    printf("num1 = %d num2 = %d\n",num1,num2);
    display_bits(num1);
   // display_bits(num2);
return 0;
}