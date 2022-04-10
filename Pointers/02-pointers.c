#include<stdio.h>
int main(){

    int a = 5;
    int *p = &a;

    printf("%p\n",p);
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("a = %d\n", a);

    *p = 12; //dereferencing
    printf("a = %d\n", a);
    int b =5;
  //  *p =b ;
    printf("value at p :%d\n", *p);
    printf("address at p %p\n", p);
    p = &b;
    printf("value at p   %d\n", *p);
    printf("value at *(p+1) %d\n", *(p + 1));
    printf("value at *p+1 %d\n", *p + 1);

    printf("address at p   %p\n", p);
    printf("address at p+1 %p\n", p+1);

    char *c = (char *)p; //typecasting
    printf("value at c :%d\n", *c);
    printf("value at *(c+1) :%d\n", *(c+1));

    printf("address at c %p\n", c);
    void  *p0 =  p;
    printf("value at p0 :%d\n",*(int *)p0); 
    printf("address at p0 %p\n", p0);

    int **q = &p;
    int ***r = &q;
    printf("%x\n",*p);
    printf("%p\n", *q);
    printf("%d\n", **q);
    printf("%p\n", **r);
    printf("%x\n", ***r);
    ***r = 10;
    printf("b = %d\n", b);
    **q = *p +2 ;
    printf("b = %d\n", b);
}
