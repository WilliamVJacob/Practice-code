#include<stdio.h>
#include "../essential/essential.h"


#define SET_BIT(X, Y) (X | (1 << Y))
#define CLEAR_BIT(X,Y) (X & ~(1 << Y))
int main(){
    int input=0;
    int data=0;
    printf("Enter the position you want to set bit\n");
    scanf("%d",&input);
    data = SET_BIT(data,input);
    printf("New data %x pos %d\n",data,input); 
    data = 0xFFFFFFF;
    printf("Enter the position you want to clear bit\n");
    scanf("%d", &input);
    data = CLEAR_BIT(data,input);
    DEBUG("New data %x pos %d\n", data, input);

    return 0;
}