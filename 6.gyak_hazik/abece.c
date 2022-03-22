#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define SIZE 26

string feltolt(string s[])
{
    int betu = 97; //ASCII 'a'

    for (int i = 0; i<SIZE; i++)
    {
        s[i] = (char)betu;
        betu++;
    }
}

int main()
{
string abc = "";

    feltolt(abc);
    //puts(abc);
    for (int i = 0; i<SIZE; i++)
    {
        putchar(abc[i]);
        putchar(' ');
    }
    puts(" ");
}
