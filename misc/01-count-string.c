#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
    char str[] = "aaabbaccbdeedff";
    int i= 0, j = 0, k = 0;
    int index_flag = 0;
    int print_flag =0;
    int last_flag=0;
    int count = 0;
    for(i = 0 ; i < strlen(str);++i){
        for( j= i; j < strlen(str); ++j){
            if(str[i] < str[ i-1] ){
                print_flag = 0;
                break;
            }


            if(str[i]== str[j]){
              //  printf("in1\n");
                if((j==strlen(str) -1) && (str[i] == str [i-1])){
                 //   printf("in");   
                    print_flag = 0;
                    break;
                }
                else{
                print_flag =1;
                count++;
                }

            }
            else if(index_flag == 0){
                i = j -1;
                index_flag = 1;
            }        
     //   printf("i= %d , j = %d , k = %d stri : strj : strk -> %c : %c : %c\n",i,j,index_flag,str[i],str[j],str[i-1]);
        }
        
        if(print_flag == 1){
            printf("%c%d",str[i],count);
        count = 0;
        }
     //   if (str[i] == str[])
       // {
            index_flag = 0;
        //}
    }
} 