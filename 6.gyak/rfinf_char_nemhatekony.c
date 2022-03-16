#include <stdio.h>
#include <string.h>
#include "prog1.h"
 

int rfind_char(string s, char c)
{
    int last = -1;
    int len = strlen(s);
    for (int i = 0; i<len; i++) //vagy s[i] != '\0'
    {
        if (s[i]== c)
        {
            last = i;
        }
        return last;
    }
}

int main()
{
    
}