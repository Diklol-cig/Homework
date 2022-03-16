#include <stdio.h>
#include <string.h>
#include "prog1.h"



int main(int argc, string argv[])
{
    string s = "hello";
    printf("%d\n",argc);
    puts("---");

    if (argc == 1)
    {
        puts("Hello World!");
    }
    else
    {
        printf("Hello %s!\n", argv[1]);
    }

    /*for (int i = 0; i< argc; i++)
    {
        puts(argv[i]);
    }
    return 0;*/
}