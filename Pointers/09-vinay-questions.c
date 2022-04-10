#include<stdio.h>
#include<string.h>
#if 0
void change_str(char *ptr1, char **ptr2){
    printf("ptr1 %s %p %p\n",ptr1,ptr1, &ptr1);
    printf("ptr2 %s %p %p\n", *ptr2, ptr2, &ptr2);

    ptr1 = "Good";
    printf("ptr1 %s %p\n", ptr1, ptr1);

    *ptr2 = "day";
}

int  main(){
#if 0
int z = 100;
int *p = z;
printf("%d\n",*p);
#endif
char *str1 ="Hello"; 
char *str2 ="World"; 
printf("str1 %s %p\n",str1,str1);
printf("str2 %s %p\n", str2, str2);

change_str(str1,&str2);
printf("%s %s \n",str1,str2);
return 0;
}
#endif
