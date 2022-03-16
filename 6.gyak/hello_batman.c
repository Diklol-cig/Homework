#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"



int main(int argc, string argv[])
{
    string s = "hello";

    string name = argv[1];
    if (argc>2)
    {
        puts("Sajnos szar vagy");
        exit(1); //hibat jelez
    }
    //exit(1) miatt nem kell else

    if (argc == 1)
    {
        puts("Hello World!");
    }
    else 
    {
        
        if (strcmp(name, "Batman") == 0 || strcmp(name, "Robin")==0)
        {
            printf("De never ve szellly00\n");
        }
        else
        {
            printf("Hello %s!\n", argv[1]);
        }
    }
    /*for (int i = 0; i< argc; i++)
    {
        puts(argv[i]);
    }
    return 0;*/
}