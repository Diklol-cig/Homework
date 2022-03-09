#include <stdio.h>
#include "prog1.h"

int hossz(string s)
{
    int len = 0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        len++;
    }
    return len;
    /*
    Vagy 
    int i;
    for (i =0; s[i]!='\0'; i++)
    {}
    return i;

    Vagy

    while (s[i]!= '\0')
    {
        i++;
    }
    return i;
    */
}

int main()
{
    string s = "Helloka";
    printf("Hossz: %d\n", hossz(s));
}