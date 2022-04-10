#include<stdio.h>
#include<string.h>
int main(){
char *input_str = "aaabbaccbdeedff";

printf("%s", input_str);
int next_index = 0;
int count = 0;
int flag = 0;
for (int i = 0; i < strlen(input_str) ;i++){

    for(int j = i;  j < strlen(input_str) ; j++) {
        if( input_str[j] == input_str [i]){
            ++count;   
        }
        else{

            if (flag == 0){
                next_index = i;
                flag = 1;
            }
           // continue;
        }
    }
    printf("count = %d next_index%d\n",count, next_index);
    i = next_index;
} 



return 0;
}
