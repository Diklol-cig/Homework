#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char* string;

int main(int argc, string argv[]){

    if (argc < 2)
    {
        printf("Hiba! nem adtál meg egyetlen szót sem! \n");
        exit(1);
    }
    else{
        int min = strlen(argv[1]);
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[i]) < min){
                min = strlen(argv[i]);
            }
        }
        for (int i = 0; i < argc; i++){
            if (strlen(argv[i])==min){
                printf("%s\n",argv[i]);
            }
        }
    }
    return 0;
}