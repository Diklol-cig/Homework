#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <ctype.h>

int menny (int x)
{
    if (x<2)
    {
        return 0;
    }
    else if (x>2)
    {
        return 0;
    }
    return 1;
}

int has_digit(string argv[])
{
    int length = strlen(argv[1]);
    string szo = argv[1];
    //printf("%s", szo);
    for (int i = 0; i<length; i++)
    {
        char c = szo[i];
        //printf("%c\n", c);

        if (isdigit(c))
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, string argv[])
{
    int mennyiseg = menny(argc);
    int szam = has_digit(argv);
    if (mennyiseg == 0)
    {
        puts("Nem jo mennyiseg!");
        //exit 1;
    }
    else if (strlen(argv[1])<3)
    {
        puts("Tul rovid");
    }
    else if (szam == 0)
    {
        puts("Ne legyen benne szam");
    }
    else{
        puts("Jo nev");
    }
}