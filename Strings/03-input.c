#include<stdio.h>
void main(){

    char name[5];
//    scanf("%s",name);
    //gets(name);
    fgets(name,sizeof(name),stdin);
    printf("%s\n",name);
}
