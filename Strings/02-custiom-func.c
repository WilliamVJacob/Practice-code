#include<stdio.h>

int wstrcmp(char *string1, char *string2){
    while(*string1++ == *string2++){
        if(*string1 == '\0' && *string2 =='\0')
            return 0;

    }
    return *string1 - *string2;
}
int wstrlen(char *string){
    int count =0;
    while(*(string++)){
        count++;
    } 
    return count;
}
void wstrcpy(char *string1, const char *string2){
    while(*string2)
    {
        *string1++=*string2++;
    }
}
int main(){

char *string1 = "Willia";
char *string2 = "William";
int length =0;
length = wstrlen(string1);
length = wstrcmp(string1,string2);
printf(" len = %d\n",length );
char string3[10]={0};
wstrcpy(string3,string1);
printf("%s\n",string3);


return 0;
}
