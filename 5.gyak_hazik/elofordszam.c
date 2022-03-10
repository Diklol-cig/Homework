#include <stdio.h>
#include <string.h>
#include "prog1.h"


int char_count(string s, char c)
{
    int hossz = strlen(s);
    int ossz = 0;
    for (int i = 0; s[i]!= '\0'; i++)
    {
        if (s[i] == c)
        {
            ossz++;
        }
    
    }
    return ossz;
}

int main()
{
   
   int elso = char_count("Abba", 'x');
   printf("%d\n", elso);

}