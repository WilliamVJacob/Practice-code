#include <stdlib.h>
#include <stdio.h>
int main(){
    printf("Running ls with system\n");

    system("ls -l");

    printf("Done.\n");

    exit(0);
}
