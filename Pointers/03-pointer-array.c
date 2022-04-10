#include <stdio.h>
#include <string.h>
void func1();
void func2();

int main()
{
  //  func1();
    func2();
    int a[5] ={2,4,6,8,5};
    int *p = a;
    p++;
    //a++; this is invalid 
#if 0
    for(int i =0 ; i<5;i++){
        printf("address %p value %d \n",(p + i), *(p+i));
        printf("address %p value %d \n", &a [i], a [i]);
    }
#endif
  //  char c[5] = "Hello";
    //printf("string %s sizeof %lu strlen %lu\n",c,sizeof(c),strlen(c));
}
void func1(){
    char c[50] = "Hellomynameiswilliamvjacob";
    printf("func1 string %s sizeof %lu strlen %lu\n", c, sizeof(c), strlen(c));
}
void func2()
{
    char c[5] = "Hello";
    char a[5] ="hai";
    printf("func2 string %s sizeof %lu strlen %lu adress %p\n", c, sizeof(c), strlen(c), c);

    printf("func2 string %s sizeof %lu strlen %lu adress %p\n", a, sizeof(a), strlen(a),a);
}
