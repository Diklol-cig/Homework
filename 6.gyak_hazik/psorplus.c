#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"


int main(int argc, string argv[])
{
    
    if (argc < 3)
    {
        puts("Keves");
    }
    else if (argc == 3)
    {
        int x = atoi(argv[1]);
        int y = atoi(argv[2]);
        printf("Osszeg: %d\n", x+y);
    }
    else{
        puts("Tul sok");
    }

}