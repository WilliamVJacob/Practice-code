#include <stdio.h>
#include <string.h>

void print( char* c){
  //  c[0] = 'A'; //This will not work if c is const char*

    int i = 0;
#if 0 
    while (c[i]!= NULL)
    {
        printf("%c\n",*(c+i));
        i++ ;
    }
#endif
    while (*c != NULL)
    {
        printf("%c\n", *c);
        c++;
    }
}
int main()
{
    char c1[20] ="Hello"; //string gets stored in the space for array
    //char *c1 = "hello"; //string stored as compile time constant
    //c1[0] ='A';  //This will not work if string is stored as compile time constant

    printf("c1 :%s\n",c1);
    printf("sizeof c1 %lu\n",sizeof(c1));
    printf("length c1 %lu\n",strlen(c1));
    char *c2;
    c2 = c1 ; // c1 = c2 is not possible
    c2++;
    printf("c2 : %s\n", c2);
    printf("sizeof c2 %lu\n", sizeof(c2));
    printf("length c2 %lu\n", strlen(c2)); 
    //arrays are always passed to function by reference
    print(c1);
}