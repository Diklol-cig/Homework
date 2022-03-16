#include <stdio.h>
#include <string.h>
#include "prog1.h"



int main(int argc, string argv[])
{
    string s = "hello";
    printf("%d\n",argc);
    puts("---");

    for (int i = 0; i< argc; i++)
    {
        puts(argv[i]);
    }
    return 0;
}