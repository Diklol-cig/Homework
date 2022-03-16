//Angol ab: 26, Magyar abc: 44
#include <stdio.h>
#include "prog1.h"


#define SIZE 26

void feltolt (char tomb[])
{
    for (char c = 'a'; c<= 'z'; ++c)
    {
        tomb[c-'a'] = (char)c;
    }
}

int main()
{
    char abc[SIZE];

    feltolt(abc);

    for (int i = 0; i<SIZE; i++)
    {
        putchar(abc[i]);
        putchar(' ');
    }
    puts(" ");
}