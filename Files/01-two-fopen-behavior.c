#include <stdio.h>

int main()
{
    FILE *pFile;
    char buffer[] = {'x', 'y', 'z','w','i','l'};
    char buffer1[] = {'a', 'b', 'c'};

    pFile = fopen("myfile", "w");
    FILE *pFile1;
    pFile1 = fopen("myfile", "w+");
    fwrite(buffer, sizeof(char), sizeof(buffer), pFile);

    fwrite(buffer1, sizeof(char), sizeof(buffer1), pFile1);

    fclose(pFile);
    fclose(pFile1);

    return 0;
}