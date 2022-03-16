//Angol ab: 26, Magyar abc: 44
#include <stdio.h>
#include "prog1.h"


#define SIZE 26

void feltolt (char tomb[])
{
    int betu = 97; //ASCII 'a'

    for (int i = 0; i<SIZE; i++)
    {
        tomb[i] = (char)betu;
        betu++;
    }
}

int main()
{
    char abc[SIZE];

    feltolt(abc);
    //puts(abc);
    for (int i = 0; i<SIZE; i++)
    {
        putchar(abc[i]);
        putchar(' ');
    }
    puts(" ");
}