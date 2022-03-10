#include <stdio.h>
#include <string.h>
#include "prog1.h"


int rfind_char(string s, char c)
{
    int hossz = strlen(s);
    for (int i = hossz; i>0; i--)
    {
        if (s[i] == c)
        {
            return i;
        }
    
    }
    return -1;
}

int main()
{
   
   int elso = rfind_char("Aladar", 'a');
   printf("%d\n", elso);

}