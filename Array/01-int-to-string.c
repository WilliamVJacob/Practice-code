#include<stdio.h>
void digit2command(int command);

void digit2command(int command){
    char command_list[][6] = {"Up","Down", "left" , "right" , "on" , "off"};
    
    printf("Utterred command is '%s' \n", command_list[command]);

#ifdef DEBUG
    for(int i =0; i < 6 ;++i){
        printf("Command %d = %s \n", i,command_list[i]);
    } 
#endif
}
int main(){

int max_level = 4;
digit2command(max_level); 
return 0;
}
